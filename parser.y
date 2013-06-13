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
%locations

%token TAG_ERROR
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
%token _HEAD
%token HR
%token HR_
%token _HR
%token HTML
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
%token OL
%token OL_
%token _OL
%token P
%token P_
%token _P
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

ARCHIVO                         : DOCTYPE HTML_OPEN_TAG CABEZA CUERPO HTML_CLOSE_TAG       {imprimir();}
                                ;


HTML_OPEN_TAG                   : HTML CLOSE                                               {insertar("html");}
                                | TAG_ERROR CLOSE                                          {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


HTML_CLOSE_TAG                  : _HTML                                                    {insertar("/html");}
                                ;


CABEZA                          : CABEZA_OPEN CABEZA_TAGS CABEZA_CLOSE
                                ;

CABEZA_TAGS                     : TITULO CABEZA_TAGS
                                | STYLE_TAG CABEZA_TAGS
                                | LINK_TAG CABEZA_TAGS
                                | META_TAG CABEZA_TAGS
                                | SCRIPT_TAG CABEZA_TAGS
                                |
                                ;


CABEZA_OPEN                     : HEAD                                              {insertar("head");}  
                                ;               


CABEZA_CLOSE                    : _HEAD                                                    {insertar("/head");}
                                ;


TITULO                          : TITULO_OPEN TEXTUAL TITULO_CLOSE
                                ;


TITULO_OPEN                     : TITLE                                                    {insertar("title");}
                                ;


TITULO_CLOSE                    : _TITLE                                                   {insertar("/title");}
                                ;


CUERPO                          : CUERPO_OPEN CONTENIDO CUERPO_CLOSE
                                ;

CUERPO_OPEN                     : BODY                                                     {insertar("body");}
                                | BODY_ CLOSE                                              {insertar("body");}
                                | TAG_ERROR CLOSE                                          {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

CUERPO_CLOSE                    : _BODY                                                    {insertar("/body");}

CONTENIDO                       : BLOQUE CONTENIDO
                                | 
                                ;

BLOQUE                          : A_TAG
                                | H1_TAG
                                | H2_TAG 
                                | H3_TAG 
                                | H4_TAG 
                                | H5_TAG 
                                | H6_TAG
                                | B_TAG 
                                | BLOCKQUOTE_TAG 
                                | BR_TAG 
                                | BUTTON_TAG
                                | CODE_TAG
                                | DIV_TAG
                                | DL_TAG 
                                | EMBED_TAG
                                | FORM_TAG
                                | HR_TAG
                                | IMG_TAG
                                | LINK_TAG
                                | LIST_TAG
                                | SCRIPT_TAG
                                | TABLE_TAG
                                | TEXTAREA_TAG
                                | TEXTUAL
                                ;


A_TAG                           : A_TAG_OPEN CONTENIDO _A                               {insertar("/a_tag");}
                                ;


A_TAG_OPEN                      : A CLOSE                                               {insertar("a_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

H1_TAG                          : H1_TAG_OPEN CONTENIDO _H1                              {insertar("/h1_tag");}
                                ;

H1_TAG_OPEN                     : H1                                                    {insertar("h1_tag");}
                                | H1_ CLOSE                                             {insertar("h1_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


H2_TAG                          : H2_TAG_OPEN CONTENIDO _H2                               {insertar("/h2_tag");}
                                ;

H2_TAG_OPEN                     : H2                                                    {insertar("h2_tag");}
                                | H2_ CLOSE                                             {insertar("h2_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

H3_TAG                          : H3_TAG_OPEN CONTENIDO _H3                               {insertar("/h3_tag");}
                                ;

H3_TAG_OPEN                     : H3                                                    {insertar("h3_tag");}
                                | H3_ CLOSE                                             {insertar("h3_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

H4_TAG                          : H4_TAG_OPEN CONTENIDO _H4                               {insertar("/h4_tag");}
                                ;

H4_TAG_OPEN                     : H4                                                    {insertar("h4_tag");}
                                | H4_ CLOSE                                             {insertar("h4_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

H5_TAG                          : H5_TAG_OPEN CONTENIDO _H5                               {insertar("/h5_tag");}
                                ;

H5_TAG_OPEN                     : H5                                                    {insertar("h5_tag");}
                                | H5_ CLOSE                                             {insertar("h5_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

H6_TAG                          : H6_TAG_OPEN CONTENIDO _H6                               {insertar("/h6_tag");}
                                ;

H6_TAG_OPEN                     : H6                                                    {insertar("h6_tag");}
                                | H6_ CLOSE                                             {insertar("h6_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

P_TAG                           : P_TAG_OPEN SPAN_TAG TEXTUAL SPAN_TAG _P               {insertar("/p_tag");}
                                ;

P_TAG_OPEN                      : P                                                     {insertar("p_tag");}
                                | P_ CLOSE                                              {insertar("p_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

SPAN_TAG                        : SPAN_TAG_OPEN TEXTUAL _SPAN                           {insertar("/span");}
                                |
                                ;


SPAN_TAG_OPEN                   : SPAN CLOSE                                            {insertar("span");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

B_TAG                           : B TEXTO _B                                            {insertar("b_tag"); insertar("/b_tag");}
                                ;


BLOCKQUOTE_TAG                  : BLOCKQUOTE_TAG_OPEN TEXTUAL BLOCKQUOTE_TAG_CLOSE
                                ;


BLOCKQUOTE_TAG_OPEN             : BLOCKQUOTE                                            {insertar("blockquote");}
                                | BLOCKQUOTE_ CLOSE                                     {insertar("blockquote");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


BLOCKQUOTE_TAG_CLOSE            : _BLOCKQUOTE                                           {insertar("/blockquote");}
                                ;


BR_TAG                          : BR _BR                                                {insertar("br_tag"); insertar("/br_tag");}
                                ;


BUTTON_TAG                      : BUTTON_TAG_OPEN IMG_TAG BUTTON_TAG_CLOSE
                                | BUTTON_TAG_OPEN TEXTUAL BUTTON_TAG_CLOSE
                                ;

IMG_TAG                         : IMG CLOSE _IMG                                        {insertar("img"); insertar("/img");}
                                | TAG_ERROR CLOSE _IMG                                  {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


CODE_TAG                        : CODE_TAG_OPEN TEXTUAL _CODE                           {insertar("/code");}
                                ;


CODE_TAG_OPEN                   : CODE                                                  {insertar("code");}
                                ;


DIV_TAG                         : DIV_TAG_OPEN CONTENIDO DIV_TAG_CLOSE
                                ;


DIV_TAG_OPEN                    : DIV                                                   {insertar("div_tag");}
                                | DIV_ CLOSE                                            {insertar("div_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


DIV_TAG_CLOSE                   : _DIV                                                  {insertar("/div_tag");}
                                ;


FORM_TAG                        : FORM_TAG_OPEN FORM_TAG_CONTENIDO FORM_TAG_CLOSE
                                ;


FORM_TAG_OPEN                   : FORM                                                  {insertar("form");}
                                | FORM_ CLOSE                                           {insertar("form");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


FORM_TAG_CLOSE                  : _FORM                                                 {insertar("/form");}


FORM_TAG_CONTENIDO              : INPUT_TAG FORM_TAG_CONTENIDO
                                | TEXTAREA_TAG FORM_TAG_CONTENIDO
                                | BUTTON_TAG FORM_TAG_CONTENIDO
                                |
                                ;


INPUT_TAG                       : INPUT CLOSE _INPUT                                    {insertar("input"); insertar("/input");}
                                | TAG_ERROR CLOSE _INPUT                                {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
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
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


EMBED_TAG                       : EMBED CLOSE _EMBED                                    {insertar("embed"); insertar("/embed");}
                                ;


BUTTON_TAG_OPEN                 : BUTTON                                                {insertar("button");}
                                | BUTTON_ CLOSE                                         {insertar("button");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


BUTTON_TAG_CLOSE                : _BUTTON                                               {insertar("/button");}
                                ;

HR_TAG                          : HR_TAG _HR                                            {insertar("/hr_tag");}
                                | HR                                                    {insertar("hr_tag");}
                                | HR_ CLOSE                                             {insertar("hr_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

LINK_TAG                        : LINK CLOSE _LINK                                      {insertar("link"); insertar("/link");}
                                | TAG_ERROR CLOSE _LINK                                 {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


META_TAG                        : META CLOSE _META                                      {insertar("meta"); insertar("/meta");}
                                | TAG_ERROR CLOSE _META                                 {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


LIST_TAG                        : OL_TAG
                                | UL_TAG
                                ;

OL_TAG                          : OL_TAG_OPEN LI_TAG OL_TAG_CLOSE
                                ;


OL_TAG_OPEN                     : OL                                                    {insertar("ol_tag");}
                                | OL_ CLOSE                                             {insertar("ol_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;     


OL_TAG_CLOSE                    : _OL                                                   {insertar("/ol_tag");}
                                ;

LI_TAG                          : LI_TAG_OPEN TEXTUAL LI_TAG_CLOSE LI_TAG
                                |
                                ;


LI_TAG_OPEN                     : LI                                                    {insertar("li_tag");}
                                | LI_ CLOSE                                             {insertar("li_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


LI_TAG_CLOSE                    : _LI                                                   {insertar("/li_tag");}
                                ;


SCRIPT_TAG                      : SCRIPT_TAG_OPEN TEXTUAL _SCRIPT                       {insertar("/script");}
                                ;


SCRIPT_TAG_OPEN                 : SCRIPT                                                {insertar("script");}
                                | SCRIPT_ CLOSE                                         {insertar("script");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


TABLE_TAG                       : TABLE_TAG_OPEN CAPTION_TAG TR_TAG _TABLE              {insertar("/table");}
                                ;


TABLE_TAG_OPEN                  : TABLE CLOSE                                           {insertar("table");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


CAPTION_TAG                     : CAPTION_TAG_OPEN TEXTUAL CAPTION_TAG_CLOSE
                                |
                                ;


CAPTION_TAG_OPEN                : CAPTION                                               {insertar("caption");}
                                | CAPTION_ CLOSE                                        {insertar("caption");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


CAPTION_TAG_CLOSE               : _CAPTION                                              {insertar("/caption");}
                                ;


TR_TAG                          : TR_TAG_OPEN TH_TAG TR_TAG_CLOSE                                
                                | TR_TAG_OPEN TD_TAG TR_TAG_CLOSE 
                                |                                                                       
                                ;


TR_TAG_OPEN                     : TR CLOSE                                              {insertar("tr_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


TR_TAG_CLOSE                    : _TR                                                   {insertar("/tr_tag");}
                                ;


TH_TAG                          : TH_TAG_OPEN TEXTUAL TH_TAG_CLOSE 
                                | 
                                ;


TH_TAG_OPEN                     : TH CLOSE                                              {insertar("th_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


TH_TAG_CLOSE                    : _TH                                                   {insertar("/th_tag");}
                                ;


TD_TAG                          : TD_TAG_OPEN TEXTUAL TD_TAG_CLOSE
                                ;


TD_TAG_OPEN                     : TD CLOSE                                              {insertar("td_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


TD_TAG_CLOSE                    : _TD                                                   {insertar("/td_tag");}
                                ;


TEXTAREA_TAG                    : TEXTAREA_TAG_OPEN _TEXTAREA                           {insertar("/textarea");}
                                | TEXTAREA_TAG_OPEN TEXTUAL _TEXTAREA                   {insertar("/textarea");}
                                ;


TEXTAREA_TAG_OPEN               : TEXTAREA                                              {insertar("textarea");}
                                | TEXTAREA_ CLOSE                                       {insertar("textarea");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

UL_TAG                          : UL_TAG_OPEN LI_TAG UL_TAG_CLOSE                                 
                                ;


UL_TAG_OPEN                     : UL CLOSE                                              {insertar("ul_tag");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;


UL_TAG_CLOSE                    : _UL                                                   {insertar("/ul_tag");}
                                ;


STYLE_TAG                       : STYLE_TAG_OPEN TEXTUAL _STYLE                         {insertar("/style");}
                                | STYLE_TAG_OPEN _STYLE                                 {insertar("/style");}
                                ;


STYLE_TAG_OPEN                  : STYLE CLOSE                                           {insertar("style");}
                                | TAG_ERROR CLOSE                                       {bandera = 1; insertarError(yylval.string, yylloc.first_line, yylloc.first_column);}
                                ;

TEXTUAL                         : P_TAG
                                | STRONG_TAG
                                | EM_TAG
                                | TEXTO                                                 {insertar("texto");}
                                ;

STRONG_TAG                      : STRONG_TAG_OPEN TEXTUAL _STRONG                       {insertar("/strong");}
                                ;


STRONG_TAG_OPEN                 : STRONG                                                {insertar("strong");}
                                ;

%%

/*Variables para el árbol de parsing*/
PTRNODOPILA ptrPila = NULL;
struct nodoLista *ptr = NULL;
int cantidadTabsPorTag = 0;
/*Fin variables para el árbol de parsing*/


void yyerror(const char *s)
{
	fprintf(stderr, "Error en la línea %d columna %d cerca de %s >>> %s\n\n", yylloc.first_line, yylloc.first_column, yylval.string, s);
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


/*Si al insertar el nodo no hay nada en la lista, se crea la lista con un único nodo.*/
struct nodoListaError* crearListaError(char *tag, int linea, int columna)
{
    /*Asignación de memoria*/
    struct nodoListaError *ptr = (struct nodoListaError*)malloc(sizeof(struct nodoListaError));
    char *str;
    if(ptr == NULL) /*No hay memoria suficiente.*/
    {
        printf("No se pudo crear el Nodo. No hay suficiente memoria.\n");
    }
    else
    {

        const char *const Error = "Error en atributos de ";

        const size_t tagLength = strlen(tag);
        const size_t errorLength = strlen(Error);
        const size_t totalLength = tagLength + errorLength;

        char *const strfinal = malloc(totalLength + 1);

        strcpy(strfinal, Error);
        strcpy(strfinal + errorLength, tag);

        ptr->etiqueta = strfinal; /*Se establecen los valores de las datos del nodo*/
        ptr->linea = linea;
        ptr->columna = columna;
        ptr->ptrSiguiente = NULL;
        nodoInicialError = nodoActualError = ptr; /*Se actualiza la referencia al primer nodo*/
    }
    return ptr;
}

/*Inserta un nuevo nodo en la lista enlazada.*/
struct nodoListaError* insertarError(char *tag, int linea, int columna)
{
    /*Si la lista está vacía*/
    if(nodoInicialError == NULL)
    {
        return (crearListaError(tag, linea, columna));
    }

    /*Asignación de memoria*/
    struct nodoListaError *ptr = (struct nodoListaError*)malloc(sizeof(struct nodoListaError));

    if(ptr == NULL) /*No hay memoria suficiente*/
    {
        printf("No se pudo crear el Nodo. No hay suficiente memoria.\n");
    }
    else
    {   
            const char *const Error = "Error en atributos de ";

            const size_t tagLength = strlen(tag);
            const size_t errorLength = strlen(Error);
            const size_t totalLength = tagLength + errorLength;

            char *const strfinal = malloc(totalLength + 1);

            strcpy(strfinal, Error);
            strcpy(strfinal + errorLength, tag);

            ptr->etiqueta = strfinal; /*Se establecen los valores de los datos del nodo*/
            ptr->linea = linea;
            ptr->columna = columna;
            ptr->ptrSiguiente = NULL;
            nodoActualError->ptrSiguiente = ptr; /*Se actualiza la referencia al primer nodo*/
            nodoActualError = ptr;
    }
    return ptr;
}


void imprimir(void)
{
        if(bandera)
        {
                imprimirErrores();

        }
        else
        {
                imprimirArbol();
        }
}

void imprimirArbol(void)
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


void imprimirErrores(void)
{
    struct nodoListaError *ptr = nodoInicialError; /*Se crea una copia de la referencia 
                                        al primer nodo para recorrer la lista*/

    printf("\n**** ERRORES ****\n\n");

    while(ptr != NULL) /*Mientras que el puntero no sea NULL*/
    {
        printf("%s en la linea: %d columna: %d\n", ptr->etiqueta, ptr->linea, ptr->columna);
        
        ptr = ptr->ptrSiguiente; /*Se pasa al siguiente nodo*/
    }
    printf("\n**** *****\n");
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
