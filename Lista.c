#include "Nodo.h"
#include "NodoPila.h"

/*Se crea el puntero al primer nodo de la Pila*/
    PTRNODOPILA ptrPila = NULL;
    int cantidadTabsPorTag = 0;

int main(void)
{
    /*Se crea el puntero al primer nodo de la lista*/
    struct nodoLista *ptr = NULL;
    

    /*Inserciones*/
    insertar("html");
    insertar("head");
    insertar("texto");
    insertar("/head");
    insertar("body");
    insertar("/body");
    insertar("/html");


    /*Se imprime la lista*/
    imprimir();

    /*Se imprime la pila*/
    imprimirPila(ptrPila);

    return 0;
}

/*Si al insertar el nodo no hay nada en la lista, se crea la lista con un único nodo.*/
struct nodoLista* crearLista(char *tag)
{
    /*Asignación de memoria*/
    struct nodoLista *ptr = (struct nodoLista*)malloc(sizeof(struct nodoLista));
    if(ptr == NULL) /*No hay memoria suficiente.*/
    {
        printf("No se pudo crear el Nodo. No hay suficiente memoria.\n");
    }
    else
    {
    	ptr->etiqueta = strdup(tag); /*Se establecen los valores de las datos del nodo*/
    	ptr->padre = "ROOT";
    	ptr->ptrSiguiente = NULL;
        ptr->cantidadTabs = cantidadTabsPorTag;
    	nodoInicial = nodoActual = ptr; /*Se actualiza la referencia al primer nodo*/

        /*Se establece el nuevo padre*/
        push(&ptrPila, tag);
        cantidadTabsPorTag++;
    }
    return ptr;
}

/*Inserta un nuevo nodo en la lista enlazada.*/
struct nodoLista* insertar(char *tag)
{
    /*Si la lista está vacía*/
    if(nodoInicial == NULL)
    {
        return (crearLista(tag));
    }

    /*Asignación de memoria*/
    struct nodoLista *ptr = (struct nodoLista*)malloc(sizeof(struct nodoLista));

    if(ptr == NULL) /*No hay memoria suficiente*/
    {
        printf("No se pudo crear el Nodo. No hay suficiente memoria.\n");
    }
    else
    {
        char *tagCierre = strdup(ptrPila -> etiqueta);
        char tagCierreEsperado[] = "/";
        strcat(tagCierreEsperado, tagCierre);
        //printf("Cierre esperado %s\n", tagCierreEsperado);
        /*Si se encuentra la etiqueta de cierre esperada*/
        if(strcmp(tagCierreEsperado, tag) == 0)
        {
            pop(&ptrPila); /*Se elimina la referencia al padre actual*/
            cantidadTabsPorTag--;
        }
        else
        {
            ptr->etiqueta = strdup(tag); /*Se establecen los valores de los datos del nodo*/
            ptr->padre = strdup(ptrPila -> etiqueta);
            ptr->ptrSiguiente = NULL;
            ptr->cantidadTabs = cantidadTabsPorTag;
            nodoActual->ptrSiguiente = ptr; /*Se actualiza la referencia al primer nodo*/
            nodoActual = ptr;
            /*Si se inserta texto, no se ocupa en la pila*/
            if(strcmp(tag, "texto") != 0)
            {
                push(&ptrPila, tag);
                cantidadTabsPorTag++;
            }
        }
    }
    return ptr;
}


/*Si al insertar el nodo no hay nada en la lista, se crea la lista con un único nodo.*/
struct nodoListaError* crearListaError(char *tag, int linea, int columna)
{
    /*Asignación de memoria*/
    struct nodoListaError *ptr = (struct nodoListaError*)malloc(sizeof(struct nodoListaError));
    if(ptr == NULL) /*No hay memoria suficiente.*/
    {
        printf("No se pudo crear el Nodo. No hay suficiente memoria.\n");
    }
    else
    {
        ptr->etiqueta = strdup(tag); /*Se establecen los valores de las datos del nodo*/
        ptr->linea = linea;
        ptr_>columna = columna;
        ptr->ptrSiguiente = NULL;
        nodoInicialError = nodoActual = ptr; /*Se actualiza la referencia al primer nodo*/

        /*Se establece el nuevo padre*/
        push(&ptrPila, tag);
        cantidadTabsPorTag++;
    }
    return ptr;
}

/*Inserta un nuevo nodo en la lista enlazada.*/
struct nodoListaError* insertarError(char *tag, int linea, int columna)
{
    /*Si la lista está vacía*/
    if(nodoInicialError == NULL)
    {
        return (crearLista(tag));
    }

    /*Asignación de memoria*/
    struct nodoListaError *ptr = (struct nodoListaError*)malloc(sizeof(struct nodoListaError));

    if(ptr == NULL) /*No hay memoria suficiente*/
    {
        printf("No se pudo crear el Nodo. No hay suficiente memoria.\n");
    }
    else
    {        
            ptr->etiqueta = strdup(tag); /*Se establecen los valores de los datos del nodo*/
            ptr->linea = linea;
            ptr->columna = columna;
            ptr->ptrSiguiente = NULL;
            nodoActual->ptrSiguiente = ptr; /*Se actualiza la referencia al primer nodo*/
            nodoActual = ptr;
    }
    return ptr;
}


void imprimir(void)
{
    struct nodoLista *ptr = nodoInicial; /*Se crea una copia de la referencia 
                                        al primer nodo para recorrer la lista*/

    struct nodoLista *ptrTemp;

    int i = 0;
    int cantidad = 0;

    char *padreActual;
    char *tagActual;

    while(ptr != NULL) /*Mientras que el puntero no sea NULL*/
    {
        ptrTemp = ptr;
        cantidad = ptr -> cantidadTabs;
        padreActual = ptr -> etiqueta;

        for(i = 0; i < cantidad; i++)
        {
            printf("\t");
        } 

        printf("%s ", ptr->etiqueta);

        while(ptrTemp != NULL)
        {
            tagActual = ptrTemp -> padre;
            if(strcmp(tagActual, padreActual) == 0)
            {
                printf("%s ", ptrTemp -> etiqueta);
            }
            ptrTemp = ptrTemp -> ptrSiguiente;
        }

        printf("\n");
        ptr = ptr->ptrSiguiente; /*Se pasa al siguiente nodo*/
    }

    printf("\n");
}

/*Funciones de la Pila*/
void push(PTRNODOPILA *top, char * valor)
{
    PTRNODOPILA nuevo;
    nuevo = malloc(sizeof(NODOPILA));
    if(nuevo != NULL)
    {
        nuevo -> etiqueta = strdup(valor);
        nuevo -> ptrSiguiente = *top;
        *top = nuevo;
    }
    else
    {
        printf("El nodo no fue creado. No hay suficiente memoria\n");
    }
}

void pop(PTRNODOPILA *top)
{
    PTRNODOPILA temp;
    temp = *top;
    *top = (*top) -> ptrSiguiente;
    free(temp);
}

int estaVacia(PTRNODOPILA top)
{
    return top == NULL;
}

void imprimirPila(PTRNODOPILA top)
{
    if(top == NULL)
    {
        printf("La pila está vacía\n");
    }
    else
    {
        while(top != NULL)
        {
            printf("%s -> ", top -> etiqueta);
            top = top -> ptrSiguiente;
        }
        printf("NULL\n");
    }
}