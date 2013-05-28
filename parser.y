%{
	#include <stdio.h>
	#include <assert.h>
	#include "Nodo.h"
	#include "NodoPila.h"
	void yyerror(char *s);
%}

%union 
{
        char *string;
}


%token TEXTO
%token DOCTYPE
%token A
%token _A
%token B
%token _B
%token BLOCKQUOTE
%token BLOCKQUOTE_
%token _BLOCKQUOTE
%token BODY
%token BODY_
%token _BODY
%token BR
%token _BR
%token BUTTON
%token BUTTON_
%token _BUTTON
%token CAPTION
%token CAPTION_
%token _CAPTION
%token CODE
%token _CODE
%token DIV
%token DIV_
%token _DIV
%token DL
%token _DL
%token DT
%token _DT
%token DD
%token _DD
%token EM
%token _EM
%token EMBED
%token _EMBED
%token FOOTER
%token _FOOTER
%token FORM
%token FORM_
%token _FORM
%token H1
%token H1_
%token _H1
%token H2
%token H2_
%token _H2
%token H3
%token H3_
%token _H3
%token H4
%token H4_
%token _H4
%token H5
%token H5_
%token _H5
%token H6
%token H6_
%token _H6
%token HEAD
%token HEAD_
%token _HEAD
%token HEADER
%token _HEADER
%token HR
%token HR_
%token _HR
%token HTML
%token HTML_
%token _HTML
%token IMG
%token _IMG
%token INPUT
%token _INPUT
%token LI
%token LI_
%token _LI
%token LINK
%token _LINK
%token META
%token _META
%token OBJECT
%token _OBJECT
%token OL
%token OL_
%token _OL
%token P
%token P_
%token _P
%token PRE
%token PRE_
%token _PRE
%token SCRIPT
%token SCRIPT_
%token _SCRIPT
%token SPAN
%token _SPAN
%token STRONG
%token _STRONG
%token STYLE
%token _STYLE
%token TABLE
%token _TABLE
%token TD
%token _TD
%token TEXTAREA
%token TEXTAREA_
%token _TEXTAREA
%token TH
%token _TH
%token TITLE
%token _TITLE
%token TR
%token _TR
%token UL
%token _UL
%token CLOSE

%%

ARCHIVO							: HTML_OPEN_TAG CABEZA CUERPO HTML_CLOSE_TAG {imprimir();}
								;

HTML_OPEN_TAG					: HTML {insertar("html");}
								| HTML_ CLOSE
								;

HTML_CLOSE_TAG					: _HTML {insertar("/html");}
								;

CABEZA 							: CABEZA_OPEN CABEZA_CLOSE

CABEZA_OPEN						: CABEZA_OPEN TITULO
								| HEAD {insertar("head");}
								| HEAD_ CLOSE {insertar("head");}
								;

CABEZA_CLOSE					: _HEAD {insertar("/head");}

TITULO 							: TITULO_OPEN TITULO_CLOSE

TITULO_OPEN						: TITULO_OPEN TEXTO {insertar("texto");}
								| TITLE {insertar("title");}
								;

TITULO_CLOSE					: _TITLE {insertar("/title");}
								;

CUERPO 							: CUERPO_OPEN CUERPO_CLOSE 

CUERPO_OPEN						: BODY {insertar("body");}
								| BODY_ CLOSE {insertar("body");}
								;

CUERPO_CLOSE					: _BODY {insertar("/body");}



%%


PTRNODOPILA ptrPila = NULL;
struct nodoLista *ptr = NULL;
int cantidadTabsPorTag = 0;

void yyerror(char *s)
{
	fprintf(stderr, "Error %s\n",s);
}

int main() {
	return yyparse();
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


void imprimir(void)
{
	printf("\n\n*** Árbol de Parsing ***\n\n");
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