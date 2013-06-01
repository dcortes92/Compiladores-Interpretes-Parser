%{
	#include <stdio.h>
	#include <assert.h>
	#include "Nodo.h"
	#include "NodoPila.h"
        #include <stdarg.h>

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
%token ERROR

%%


ARCHIVO				: HTML_OPEN_TAG CABEZA CUERPO HTML_CLOSE_TAG               {printf("CORRECTO\n");}
				;


HTML_OPEN_TAG			: HTML                                                     {insertar("html");}
				| HTML_ CLOSE                                              {insertar("html");}
				;


HTML_CLOSE_TAG			: _HTML                                                    {insertar("/html");}
				;


CABEZA 				: CABEZA_OPEN CABEZA_CLOSE


CABEZA_OPEN			: CABEZA_OPEN TITULO
                                | CABEZA_OPEN STYLE_TAG
                                | CABEZA_OPEN LINK_TAG
                                | CABEZA_OPEN META_TAG
                                | CABEZA_OPEN SCRIPT_TAG
				| HEAD                                                     {insertar("head");}
				| HEAD_ CLOSE                                              {insertar("head");}
				;


CABEZA_CLOSE			: _HEAD                                                    {insertar("/head");}
                                ;


TITULO 				: TITULO_OPEN TITULO_CLOSE
                                ;

TITULO_OPEN			: TITULO_OPEN TEXTUAL                                      
				| TITLE                                                    {insertar("title");}
				;


TITULO_CLOSE			: _TITLE                                                   {insertar("/title");}
				;


CUERPO 				: CUERPO_OPEN CONTENIDO_BODY CUERPO_CLOSE
                                ;


CUERPO_OPEN			: BODY                                                     {insertar("body");}
				| BODY_ CLOSE                                              {insertar("body");}
				;


CUERPO_CLOSE			: _BODY                                                    {insertar("/body");}
                                ;


CONTENIDO_BODY                  : A_TAG CONTENIDO_BODY
                                | B_TAG CONTENIDO_BODY
                                | BLOCKQUOTE_TAG CONTENIDO_BODY
                                | BR_TAG CONTENIDO_BODY
                                | BUTTON_TAG CONTENIDO_BODY
                                | CODE_TAG CONTENIDO_BODY
                                | DIV_TAG CONTENIDO_BODY
                                | DL_TAG CONTENIDO_BODY
                                | EMBED_TAG CONTENIDO_BODY
                                | FORM_TAG CONTENIDO_BODY
                                | H1_H6_TAG CONTENIDO_BODY
                                | HR_TAG CONTENIDO_BODY
                                | IMG_TAG CONTENIDO_BODY
                                | INPUT_TAG CONTENIDO_BODY
                                | LINK_TAG CONTENIDO_BODY
                                | OL_TAG CONTENIDO_BODY
                                | PRE_TAG CONTENIDO_BODY
                                | SCRIPT_TAG CONTENIDO_BODY
                                | TABLE_TAG CONTENIDO_BODY
                                | TEXTAREA_TAG CONTENIDO_BODY
                                | UL_TAG CONTENIDO_BODY
                                | TEXTUAL CONTENIDO_BODY
                                |
                                ;


A_TAG                           : A _A                                                  {insertar("a"); insertar("/a");}
                                ;


B_TAG                           : B _B                                                  {insertar("b"); insertar("/b");}
                                ;


BLOCKQUOTE_TAG                  : BLOCKQUOTE_TAG_OPEN P_TAG BLOCKQUOTE_TAG_CLOSE
                                | BLOCKQUOTE_TAG_OPEN TEXTUAL BLOCKQUOTE_TAG_CLOSE
                                ;


BLOCKQUOTE_TAG_OPEN             : BLOCKQUOTE                                            {insertar("blockquote");}
                                | BLOCKQUOTE_ CLOSE                                     {insertar("blockquote");}
                                ;


BLOCKQUOTE_TAG_CLOSE            : _BLOCKQUOTE                                           {insertar("/blockquote");}


BR_TAG                          : BR _BR                                                {insertar("br"); insertar("/br");}
                                ;


BUTTON_TAG                      : BUTTON_TAG_OPEN IMG_TAG BUTTON_TAG_CLOSE
                                | BUTTON_TAG_OPEN TEXTUAL BUTTON_TAG_CLOSE
                                ;


BUTTON_TAG_OPEN                 : BUTTON                                                {insertar("button");}
                                | BUTTON_ CLOSE                                         {insertar("button");}
                                ;


BUTTON_TAG_CLOSE                : _BUTTON                                               {insertar("/button");}
                                ;


CODE_TAG                        : CODE TEXTUAL _CODE                                    {insertar("code"); insertar("texto"); insertar("/code");}
                                ;


DIV_TAG                         : DIV_TAG CONTENIDO_BODY _DIV
                                | DIV                                                   {insertar("div");}
                                | DIV_ CLOSE                                            {insertar("/div");}
                                ;


DL_TAG                          : DL DD_TAG _DL                                         {insertar("dl"); insertar("dl");}
                                | DL DT_TAG _DL
                                ;


DD_TAG                          : DD_TAG TEXTUAL _DD                                    {insertar("texto"); insertar("/dd");}
                                | DD                                                    {insertar("dd");}
                                ;


DT_TAG                          : DT_TAG TEXTUAL _DT                                    {insertar("texto"); insertar("/dt");}
                                | DT                                                    {insertar("dt");}
                                ;


EM_TAG                          : EM TEXTUAL _EM                                        {insertar("em"); insertar("texto"); insertar("/em");}
                                ;


EMBED_TAG                       : EMBED _EMBED                                          {insertar("embed"); insertar("/embed");}
                                ;


FORM_TAG                        : FORM_TAG INPUT_TAG _FORM                              {insertar("/form");}
                                | FORM_TAG TEXTAREA_TAG _FORM                           {insertar("/form");}
                                | FORM_TAG BUTTON_TAG _FORM                             {insertar("/form");}
                                | FORM                                                  {insertar("form");}
                                | FORM_ CLOSE                                           {insertar("form");}
                                ;


H1_H6_TAG                       : H1_TAG
                                | H2_TAG
                                | H3_TAG
                                | H4_TAG
                                | H5_TAG
                                | H6_TAG
                                ;


H1_TAG                          : H1_TAG TEXTUAL _H1                                    {insertar("/h1");}
                                | H1                                                    {insertar("h1");}
                                | H1_ CLOSE                                             {insertar("h1");}
                                ;


H2_TAG                          : H2_TAG TEXTUAL _H2                                    {insertar("/h2");}
                                | H2                                                    {insertar("h2");}
                                | H2_ CLOSE                                             {insertar("h2");}
                                ;


H3_TAG                          : H3_TAG TEXTUAL _H3                                    {insertar("/h3");}
                                | H3                                                    {insertar("h3");}
                                | H3_ CLOSE                                             {insertar("h3");}
                                ;


H4_TAG                          : H4_TAG TEXTUAL _H4                                    {insertar("/h4");}
                                | H4                                                    {insertar("h4");}
                                | H4_ CLOSE                                             {insertar("h4");}
                                ;


H5_TAG                          : H5_TAG TEXTUAL _H5                                    {insertar("/h5");}
                                | H5                                                    {insertar("h5");}
                                | H5_ CLOSE                                             {insertar("h5");}
                                ;


H6_TAG                          : H6_TAG TEXTUAL _H6                                    {insertar("/h6");}
                                | H6                                                    {insertar("h6");}
                                | H6_ CLOSE                                             {insertar("h6");}
                                ;


HR_TAG                          : HR_TAG _HR                                            {insertar("/hr");}
                                | HR                                                    {insertar("hr");}
                                | HR_ CLOSE                                             {insertar("hr");}
                                ;


IMG_TAG                         : IMG _IMG                                              {insertar("img"); insertar("/img");}
                                ;


INPUT_TAG                       : INPUT _INPUT                                          {insertar("input"); insertar("/input");}
                                ;


OL_TAG                          : OL_TAG LI_TAG _OL                                     {insertar("/ol");}
                                | OL                                                    {insertar("ol");}
                                | OL_ CLOSE                                             {insertar("ol");}
                                ;


UL_TAG                          : UL_TAG LI_TAG _UL                                     {insertar("/ul");}
                                | UL                                                    {insertar("ul");}
                                ;


LI_TAG                          : LI_TAG TEXTUAL _LI                                    {insertar("/li");}
                                | LI                                                    {insertar("li");}
                                | LI_ CLOSE                                             {insertar("li");}
                                ;


LINK_TAG                        : LINK _LINK                                            {insertar("link"); insertar("/link");}
                                ;


META_TAG                        : META _META                                            {insertar("meta"); insertar("/meta");}
                                ;


P_TAG                           : P_TAG_OPEN SPAN_TAG TEXTUAL SPAN_TAG _P               {insertar("/p");}
                                ;


P_TAG_OPEN                      : P                                                     {insertar("p");}
                                | P_ CLOSE                                              {insertar("p");}
                                ;


PRE_TAG                         : PRE_TAG TEXTUAL _PRE                                  {insertar("/pre");}
                                | PRE                                                   {insertar("pre");}
                                | PRE_ CLOSE                                            {insertar("pre");}
                                ;


SCRIPT_TAG                      : SCRIPT_TAG TEXTUAL _SCRIPT                            {insertar("/script");}
                                | SCRIPT                                                {insertar("script");}
                                | SCRIPT_ CLOSE                                         {insertar("script");}
                                ;


SPAN_TAG                        : SPAN TEXTUAL _SPAN                                    {insertar("span"); insertar("texto"); insertar("/span");}
                                |
                                ;


STRONG_TAG                      : STRONG TEXTUAL _STRONG                                {insertar("strong"); insertar("/strong");}
                                ;


STYLE_TAG                       : STYLE TEXTUAL _STYLE                                  {insertar("style"); insertar("/style");}
                                ;


TABLE_TAG                       : TABLE CAPTION_TAG TR_TAG _TABLE                       {insertar("table"); insertar("/table");}
                                ;


CAPTION_TAG                     : CAPTION_TAG_OPEN TEXTUAL CAPTION_TAG_CLOSE
                                |
                                ;


CAPTION_TAG_OPEN                : CAPTION                                               {insertar("caption");}
                                | CAPTION_ CLOSE                                        {insertar("caption");}
                                ;


CAPTION_TAG_CLOSE               : _CAPTION                                              {insertar("/caption");}
                                ;


TR_TAG                          : TR_TAG TH_TD_TAG _TR                                  {insertar("/tr");}
                                | TR                                                    {insertar("tr");}
                                ;


TH_TD_TAG                       : TH_TAG
                                | TD_TAG
                                ;


TH_TAG                          : TH_TAG TEXTUAL _TH                                    {insertar("/th");}
                                | TH                                                    {insertar("th");}
                                ;


TD_TAG                          : TD_TAG TEXTUAL _TD                                    {insertar("/td");}
                                | TD                                                    {insertar("td");}
                                ;


TEXTAREA_TAG                    : TEXTAREA _TEXTAREA                                    {insertar("textarea"); insertar("/textarea");}
                                | TEXTAREA TEXTUAL _TEXTAREA                            {insertar("textarea"); insertar("/textarea");}
                                ;


TEXTUAL                         : P_TAG
                                | STRONG_TAG
                                | EM_TAG
                                | TEXTO                                                 { insertar("texto");}
                                ;


%%

/*Variables para el árbol de parsing*/
PTRNODOPILA ptrPila = NULL;
struct nodoLista *ptr = NULL;
int cantidadTabsPorTag = 0;
/*Fin variables para el árbol de parsing*/


void yyerror(char *s)
{
	fprintf(stderr, "Error cerca de %s\n\n", yylval.string);
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
    printf("\n*** Árbol de Parsing ***\n\n");
    struct nodoLista *ptr = nodoInicial; /*Se crea una copia de la referencia 
                                        al primer nodo para recorrer la lista*/

    struct nodoLista *ptrTemp;

    int i = 0;
    int cantidad = 0;

    char *padreActual;
    char *tagActual;
    char *padreSiguiente;
    while(ptr != NULL) /*Mientras que el puntero no sea NULL*/
    {
        ptrTemp = ptr;
        cantidad = ptr -> cantidadTabs;
        padreActual = ptr -> padre;

        if(strcmp((ptr -> padre), "ROOT") != 0)
        {
            printf("|");
        }


        for(i = 0; i < cantidad - 1; i++)
        {
            tagActual = ptrTemp -> etiqueta;
            padreSiguiente = strdup(ptrTemp -> ptrSiguiente -> padre);
            //printf("Padre actual: %s Padre siguiente: %s\n", padreActual, padreSiguiente);
            if(strcmp(padreActual, padreActual) == 0)
            {
                printf("\t|");
            }
            else
            {
                printf("\t");
            }
        } 

        for(i; i < cantidad; i++)
        {
            printf("____");
        }

        printf("%s\n", ptr->etiqueta);

        /*while(ptrTemp != NULL)
        {
            tagActual = ptrTemp -> padre;
            if(strcmp(tagActual, padreActual) == 0)
            {
                printf("%s ", ptrTemp -> etiqueta);
            }
            ptrTemp = ptrTemp -> ptrSiguiente;
        }

        printf("\n");*/
        ptr = ptr->ptrSiguiente; /*Se pasa al siguiente nodo*/
    }
    printf("\n*** Fin del Árbol de Parsing\n\n");
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
