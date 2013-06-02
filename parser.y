%{
	#include <stdio.h>
	#include <assert.h>
	#include "Nodo.h"
	#include "NodoPila.h"

	void yyerror(const char *s);
%}

%union 
{
        char *string;
}

%error-verbose

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

ARCHIVO				: DOCTYPE HTML_OPEN_TAG CABEZA CUERPO HTML_CLOSE_TAG       {imprimir();}
                                ;


HTML_OPEN_TAG			: HTML CLOSE                                               {insertar("html");}
				;


HTML_CLOSE_TAG			: _HTML                                                    {insertar("/html");}
				;


CABEZA 				: CABEZA_OPEN CABEZA_TAGS CABEZA_CLOSE
                                ;

CABEZA_TAGS                     : TITULO CABEZA_TAGS
                                | STYLE_TAG CABEZA_TAGS
                                | LINK_TAG CABEZA_TAGS
                                | META_TAG CABEZA_TAGS
                                | SCRIPT_TAG CABEZA_TAGS
                                |
                                ;


CABEZA_OPEN                     : HEAD                                                     {insertar("head");}
                                | HEAD_ CLOSE                                              {insertar("head");}  
                                ;               


CABEZA_CLOSE			: _HEAD                                                    {insertar("/head");}
                                ;


TITULO 				: TITULO_OPEN TEXTUAL TITULO_CLOSE
                                ;


TITULO_OPEN			: TITLE                                                    {insertar("title");}
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
                                | H1_TAG CONTENIDO_BODY 
                                | H2_TAG CONTENIDO_BODY
                                | H3_TAG CONTENIDO_BODY
                                | H4_TAG CONTENIDO_BODY
                                | H5_TAG CONTENIDO_BODY
                                | H6_TAG CONTENIDO_BODY
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


A_TAG                           : A_TAG_OPEN TEXTUAL _A                                 {insertar("/a_tag");}
                                ;


A_TAG_OPEN                      : A CLOSE                                               {insertar("a_tag");}
                                ;


B_TAG                           : B TEXTO _B                                            {insertar("b_tag"); insertar("/b_tag");}
                                ;


BLOCKQUOTE_TAG                  : BLOCKQUOTE_TAG_OPEN TEXTUAL BLOCKQUOTE_TAG_CLOSE
                                ;


BLOCKQUOTE_TAG_OPEN             : BLOCKQUOTE                                            {insertar("blockquote");}
                                | BLOCKQUOTE_ CLOSE                                     {insertar("blockquote");}
                                ;


BLOCKQUOTE_TAG_CLOSE            : _BLOCKQUOTE                                           {insertar("/blockquote");}
                                ;


BR_TAG                          : BR _BR                                                {insertar("br_tag"); insertar("/br_tag");}
                                ;


BUTTON_TAG                      : BUTTON_TAG_OPEN IMG_TAG BUTTON_TAG_CLOSE
                                | BUTTON_TAG_OPEN TEXTUAL BUTTON_TAG_CLOSE
                                ;


CODE_TAG                        : CODE_TAG_OPEN TEXTUAL _CODE                           {insertar("/code");}
                                ;


CODE_TAG_OPEN                   : CODE                                                  {insertar("code");}
                                ;


DIV_TAG                         : DIV_TAG_OPEN CONTENIDO_BODY DIV_TAG_CLOSE
                                ;


DIV_TAG_OPEN                    : DIV                                                   {insertar("div_tag");}
                                | DIV_ CLOSE                                            {insertar("div_tag");}
                                ;


DIV_TAG_CLOSE                   : _DIV                                                  {insertar("/div_tag");}
                                ;


DL_TAG                          : DL_TAG_OPEN DD_TAG _DL                                {insertar("/dl_tag");}
                                | DL_TAG_OPEN DT_TAG _DL                                {insertar("/dl_tag");}
                                ;


DL_TAG_OPEN                     : DL                                                    {insertar("dl_tag");}
                                ;


DD_TAG                          : DD_TAG TEXTUAL _DD                                    {insertar("/dd_tag");}
                                | DD                                                    {insertar("dd_tag");}
                                ;


DT_TAG                          : DT_TAG TEXTUAL _DT                                    {insertar("/dt_tag");}
                                | DT                                                    {insertar("dt_tag");}
                                ;


EM_TAG                          : EMBED_TAG_OPEN TEXTUAL _EM                            {insertar("/em_tag");}
                                ;


EMBED_TAG_OPEN                  : EM                                                    {insertar("em_tag");}
                                ;


EMBED_TAG                       : EMBED CLOSE _EMBED                                    {insertar("embed"); insertar("/embed");}
                                ;


FORM_TAG                        : FORM_TAG_OPEN FORM_TAG_CONTENIDO FORM_TAG_CLOSE
                                ;


FORM_TAG_OPEN                   : FORM                                                  {insertar("form");}
                                | FORM_ CLOSE                                           {insertar("form");}
                                ;


FORM_TAG_CLOSE                  : _FORM                                                 {insertar("/form");}


FORM_TAG_CONTENIDO              : INPUT_TAG FORM_TAG_CONTENIDO
                                | TEXTAREA_TAG FORM_TAG_CONTENIDO
                                | BUTTON_TAG FORM_TAG_CONTENIDO
                                |
                                ;


BUTTON_TAG_OPEN                 : BUTTON                                                {insertar("button");}
                                | BUTTON_ CLOSE                                         {insertar("button");}
                                ;


BUTTON_TAG_CLOSE                : _BUTTON                                               {insertar("/button");}
                                ;


H1_TAG                          : H1_TAG_OPEN TEXTUAL _H1                               {insertar("/h1_tag");}
                                ;

H1_TAG_OPEN                     : H1                                                    {insertar("h1_tag");}
                                | H1_ CLOSE                                             {insertar("h1_tag");}
                                ;


H2_TAG                          : H2_TAG TEXTUAL _H2                                    {insertar("/h2_tag");}
                                | H2                                                    {insertar("h2_tag");}
                                | H2_ CLOSE                                             {insertar("h2_tag");}
                                ;


H3_TAG                          : H3_TAG TEXTUAL _H3                                    {insertar("/h3_tag");}
                                | H3                                                    {insertar("h3_tag");}
                                | H3_ CLOSE                                             {insertar("h3_tag");}
                                ;


H4_TAG                          : H4_TAG TEXTUAL _H4                                    {insertar("/h4_tag");}
                                | H4                                                    {insertar("h4_tag");}
                                | H4_ CLOSE                                             {insertar("h4_tag");}
                                ;


H5_TAG                          : H5_TAG TEXTUAL _H5                                    {insertar("/h5_tag");}
                                | H5                                                    {insertar("h5_tag");}
                                | H5_ CLOSE                                             {insertar("h5_tag");}
                                ;


H6_TAG                          : H6_TAG TEXTUAL _H6                                    {insertar("/h6_tag");}
                                | H6                                                    {insertar("h6_tag");}
                                | H6_ CLOSE                                             {insertar("h6_tag");}
                                ;


HR_TAG                          : HR_TAG _HR                                            {insertar("/hr_tag");}
                                | HR                                                    {insertar("hr_tag");}
                                | HR_ CLOSE                                             {insertar("hr_tag");}
                                ;


IMG_TAG                         : IMG CLOSE _IMG                                        {insertar("img"); insertar("/img");}
                                ;


INPUT_TAG                       : INPUT CLOSE _INPUT                                    {insertar("input"); insertar("/input");}
                                ;


OL_TAG                          : OL_TAG_OPEN LI_TAG OL_TAG_CLOSE OL_TAG
                                | 
                                ;


OL_TAG_OPEN                     : OL                                                    {insertar("ol_tag");}
                                | OL_ CLOSE                                             {insertar("ol_tag");}
                                ;     


OL_TAG_CLOSE                    : _OL                                                   {insertar("/ol_tag");}
                                ;


UL_TAG                          : UL_TAG_OPEN LI_TAG UL_TAG_CLOSE UL_TAG
                                |                                    
                                ;


UL_TAG_OPEN                     : UL CLOSE                                              {insertar("ul_tag");}
                                ;


UL_TAG_CLOSE                    : _UL                                                   {insertar("/ul_tag");}
                                ;


LI_TAG                          : LI_TAG_OPEN TEXTUAL LI_TAG_CLOSE LI_TAG                                    
                                | 
                                ;


LI_TAG_OPEN                     : LI                                                    {insertar("li_tag");}
                                | LI_ CLOSE                                             {insertar("li_tag");}
                                ;


LI_TAG_CLOSE                    : _LI                                                   {insertar("/li_tag");}
                                ;


LINK_TAG                        : LINK CLOSE _LINK                                      {insertar("link"); insertar("/link");}
                                ;


META_TAG                        : META CLOSE _META                                      {insertar("meta"); insertar("/meta");}
                                ;


P_TAG                           : P_TAG_OPEN SPAN_TAG TEXTUAL SPAN_TAG _P               {insertar("/p_tag");}
                                ;


P_TAG_OPEN                      : P                                                     {insertar("p_tag");}
                                | P_ CLOSE                                              {insertar("p_tag");}
                                ;


PRE_TAG                         : PRE_TAG TEXTUAL _PRE                                  {insertar("/pre");}
                                | PRE                                                   {insertar("pre");}
                                | PRE_ CLOSE                                            {insertar("pre");}
                                ;


SCRIPT_TAG                      : SCRIPT_TAG_OPEN TEXTUAL _SCRIPT                       {insertar("/script");}
                                ;


SCRIPT_TAG_OPEN                 : SCRIPT                                                {insertar("script");}
                                | SCRIPT_ CLOSE                                         {insertar("script");}
                                ;


SPAN_TAG                        : SPAN_TAG_OPEN TEXTUAL _SPAN                           {insertar("/span");}
                                |
                                ;


SPAN_TAG_OPEN                   : SPAN CLOSE                                            {insertar("span");}
                                ;


STRONG_TAG                      : STRONG_TAG_OPEN TEXTUAL _STRONG                       {insertar("/strong");}
                                ;


STRONG_TAG_OPEN                 : STRONG                                                {insertar("strong");}
                                ;


STYLE_TAG                       : STYLE_TAG_OPEN TEXTUAL _STYLE                         {insertar("/style");}
                                | STYLE_TAG_OPEN _STYLE                                 {insertar("/style");}
                                ;


STYLE_TAG_OPEN                  : STYLE CLOSE                                           {insertar("style");}
                                ;


TABLE_TAG                       : TABLE_TAG_OPEN CAPTION_TAG TR_TAG _TABLE              {insertar("/table");}
                                ;


TABLE_TAG_OPEN                  : TABLE CLOSE                                           {insertar("table");}
                                ;


CAPTION_TAG                     : CAPTION_TAG_OPEN TEXTUAL CAPTION_TAG_CLOSE
                                |
                                ;


CAPTION_TAG_OPEN                : CAPTION                                               {insertar("caption");}
                                | CAPTION_ CLOSE                                        {insertar("caption");}
                                ;


CAPTION_TAG_CLOSE               : _CAPTION                                              {insertar("/caption");}
                                ;


TR_TAG                          : TR_TAG_OPEN TH_TAG TR_TAG_CLOSE TR_TAG                               
                                | TR_TAG_OPEN TD_TAG TR_TAG_CLOSE TR_TAG
                                |                                                                       
                                ;


TR_TAG_OPEN                     : TR CLOSE                                              {insertar("tr_tag");}
                                ;


TR_TAG_CLOSE                    : _TR                                                   {insertar("/tr_tag");}
                                ;


TH_TAG                          : TH_TAG_OPEN TEXTUAL TH_TAG_CLOSE TH_TAG
                                | 
                                ;


TH_TAG_OPEN                     : TH CLOSE                                              {insertar("th_tag");}
                                ;


TH_TAG_CLOSE                    : _TH                                                   {insertar("/th_tag");}
                                ;


TD_TAG                          : TD_TAG_OPEN TEXTUAL TD_TAG_CLOSE TD_TAG
                                |
                                ;


TD_TAG_OPEN                     : TD CLOSE                                              {insertar("td_tag");}
                                ;


TD_TAG_CLOSE                    : _TD                                                   {insertar("/td_tag");}
                                ;


TEXTAREA_TAG                    : TEXTAREA_TAG_OPEN _TEXTAREA                           {insertar("/textarea");}
                                | TEXTAREA_TAG_OPEN TEXTUAL _TEXTAREA                   {insertar("/textarea");}
                                ;


TEXTAREA_TAG_OPEN               : TEXTAREA                                              {insertar("textarea");}
                                | TEXTAREA CLOSE                                        {insertar("textarea");}
                                ;


TEXTUAL                         : P_TAG
                                | STRONG_TAG
                                | EM_TAG
                                | TEXTO                                                 {insertar("texto");}
                                ;


%%

/*Variables para el árbol de parsing*/
PTRNODOPILA ptrPila = NULL;
struct nodoLista *ptr = NULL;
int cantidadTabsPorTag = 0;
/*Fin variables para el árbol de parsing*/


void yyerror(const char *s)
{
	fprintf(stderr, "Error cerca de %s >>> %s\n\n", yylval.string, s);
        yyclearin;
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
        cantidad = ptrTemp -> cantidadTabs;
        padreActual = strdup(ptrTemp -> padre);

        if(strcmp(padreActual, "ROOT") == 0)
        {
                printf("%s\n", ptr->etiqueta);                
        }
        else
        {
                for(i = 0; i < cantidad-1; i++)
                {
                    printf("\t");
                }

                for(i; i < cantidad; i++)
                {
                        printf("|____");
                }

                printf("%s\n", ptr->etiqueta);
        }
        
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
