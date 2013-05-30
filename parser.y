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
%token FORM
%token FORM_
%token _FORM
%token H1_H6_
%token H1_H6
%token _H1_H6
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

ARCHIVO							: HTML_OPEN_TAG CABEZA CUERPO HTML_CLOSE_TAG               {imprimir();}
								;


HTML_OPEN_TAG					: HTML                                                     {insertar("html");}
								| HTML_ CLOSE                                              {insertar("html");}
								;


HTML_CLOSE_TAG					: _HTML                                                    {insertar("/html");}
								;


CABEZA 							: CABEZA_OPEN CABEZA_CLOSE


CABEZA_OPEN						: CABEZA_OPEN TITULO
                                | CABEZA_OPEN STYLE_TAG
                                | CABEZA_OPEN LINK_TAG
                                | CABEZA_OPEN META_TAG
                                | CABEZA_OPEN SCRIPT_TAG
								| HEAD                                                     {insertar("head");}
								| HEAD_ CLOSE                                              {insertar("head");}
								;


CABEZA_CLOSE					: _HEAD                                                    {insertar("/head");}


TITULO 							: TITULO_OPEN TITULO_CLOSE


TITULO_OPEN						: TITULO_OPEN TEXTUAL                            {insertar("texto");}
								| TITLE                                                    {insertar("title");}
								;


TITULO_CLOSE					: _TITLE                                                   {insertar("/title");}
								;


CUERPO 							: CUERPO_OPEN CONTENIDO_BODY CUERPO_CLOSE 


CUERPO_OPEN						: BODY                                                     {insertar("body");}
								| BODY_ CLOSE                                              {insertar("body");}
								;


CUERPO_CLOSE					: _BODY                                                    {insertar("/body");}


CONTENIDO_BODY                  : A_TAG
                                | B_TAG
                                | BLOCKQUOTE_TAG
                                | BR_TAG
                                | BUTTON_TAG
                                | CODE_TAG
                                | DIV_TAG
                                | DL_TAG
                                | EMBED_TAG
                                | FORM_TAG
                                | H1_H6_TAG
                                | HR_TAG
                                | IMG_TAG
                                | INPUT_TAG
                                | LINK_TAG
                                | OL_TAG
                                | PRE_TAG
                                | SCRIPT_TAG
                                | TABLE_TAG
                                | TEXTAREA_TAG
                                | UL_TAG
                                | TEXTUAL
                                ;


A_TAG                           : A _A
                                ;


B_TAG                           : B _B
                                ;


BLOCKQUOTE_TAG                  : BLOCKQUOTE_TAG_OPEN P_TAG BLOCKQUOTE_TAG_CLOSE
                                | BLOCKQUOTE_TAG_OPEN TEXTUAL BLOCKQUOTE_TAG_CLOSE
                                ;


BLOCKQUOTE_TAG_OPEN             : BLOCKQUOTE
                                | BLOCKQUOTE_
                                ;


BLOCKQUOTE_TAG_CLOSE            : _BLOCKQUOTE


BR_TAG                          : BR _BR
                                ;


BUTTON_TAG                      : BUTTON_TAG_OPEN IMG_TAG BUTTON_TAG_CLOSE
                                | BUTTON_TAG_OPEN TEXTUAL BUTTON_TAG_CLOSE
                                ;


BUTTON_TAG_OPEN                 : BUTTON
                                | BUTTON_
                                ;


BUTTON_TAG_CLOSE                : _BUTTON
                                ;


CODE_TAG                        : CODE TEXTUAL _CODE
                                ;


DIV_TAG                         : DIV_TAG CONTENIDO_BODY _DIV
                                | DIV
                                | DIV_
                                ;


DL_TAG                          : DL DD_TAG _DL
                                | DL DT_TAG _DL
                                ;


DD_TAG                          : DD_TAG TEXTUAL _DD
                                | DD
                                ;


DT_TAG                          : DT_TAG TEXTUAL _DT
                                | DT
                                ;


EM_TAG                          : EM TEXTUAL _EM
                                ;


EMBED_TAG                       : EMBED _EMBED
                                ;


FORM_TAG                        : FORM_TAG INPUT_TAG _FORM
                                | FORM_TAG TEXTAREA_TAG _FORM
                                | FORM_TAG BUTTON_TAG _FORM
                                | FORM
                                | FORM_
                                ;


H1_H6_TAG                       : H1_H6_TAG TEXTUAL _H1_H6
                                | H1_H6
                                | H1_H6_
                                ;


HR_TAG                          : HR_TAG _HR
                                | HR
                                | HR_
                                ;


IMG_TAG                         : IMG _IMG
                                ;


INPUT_TAG                       : INPUT _INPUT
                                ;


OL_TAG                          : OL_TAG LI_TAG _OL
                                | OL
                                | OL_
                                ;


UL_TAG                          : UL_TAG LI_TAG _OL
                                | UL
                                ;


LI_TAG                          : LI_TAG TEXTUAL _LI
                                | LI
                                | LI_
                                ;


LINK_TAG                        : LINK _LINK
                                ;


META_TAG                        : META _META
                                ;


P_TAG                           : P_TAG_OPEN SPAN_TAG TEXTUAL SPAN_TAG _P
                                ;


P_TAG_OPEN                      : P
                                | P_
                                ;


PRE_TAG                         : PRE_TAG TEXTUAL  _PRE
                                | PRE
                                | PRE_
                                ;


SCRIPT_TAG                      : SCRIPT_TAG TEXTUAL _SCRIPT
                                | SCRIPT
                                | SCRIPT_
                                ;


SPAN_TAG                        : SPAN TEXTUAL _SPAN
                                |
                                ;


STRONG_TAG                      : STRONG TEXTUAL _STRONG
                                ;


STYLE_TAG                       : STYLE TEXTUAL _STYLE
                                ;


TABLE_TAG                       : TABLE CAPTION_TAG TR_TAG _TABLE
                                ;


CAPTION_TAG                     : CAPTION_TAG_OPEN TEXTUAL CAPTION_TAG_CLOSE
                                |
                                ;


CAPTION_TAG_OPEN                : CAPTION
                                | CAPTION_
                                ;


CAPTION_TAG_CLOSE               : _CAPTION
                                ;


TR_TAG                          : TR_TAG TH_TD_TAG _TR
                                | TR
                                ;


TH_TD_TAG                       : TH_TAG
                                | TD_TAG
                                ;


TH_TAG                          : TH_TAG TEXTUAL _TH
                                | TH
                                ;


TD_TAG                          : TD_TAG TEXTUAL _TD
                                | TD
                                ;


TEXTAREA_TAG                    : TEXTAREA _TEXTAREA
                                | TEXTAREA TEXTUAL _TEXTAREA
                                ;


TEXTUAL                         : P_TAG
                                | STRONG_TAG
                                | EM_TAG
                                | TEXTO
                                ;


%%

/*Variables para el árbol de parsing*/
PTRNODOPILA ptrPila = NULL;
struct nodoLista *ptr = NULL;
int cantidadTabsPorTag = 0;
/*Fin variables para el árbol de parsing*/

void yyerror(char *s)
{
	fprintf(stderr, "Error %s\n",s);
}

int main() {
	return yyparse();
}


/**********************************************/
/**********************************************/
/* Funciones para generar el árbol de parsing */
/**********************************************/
/**********************************************/

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