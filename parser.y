%{
	#include <stdio.h>
	#include <assert.h>
	#include "Nodo.h"
	#include "Lista.c"
	void yyerror(char *s);
%}

%token TEXTO
%token NUMERO
%token NUMERO_255
%token HEX
%token DOCTYPE
%token A_ATTRIBUTE
%token BLOCKQUOTE_ATTRIBUTE
%token BODY_ATTRIBUTE
%token BUTTOM_ATTRIBUTE
%token CAPTION_ATTRIBUTE
%token DIV_ATTRIBUTE
%token EMBED_ATTRIBUTE
%token FORM_ATTRIBUTE
%token H1_H6_ATTRIBUTE
%token HEAD_ATTRIBUTE
%token HR_ATTRIBUTE
%token IMG_ATTRIBUTE
%token INPUT_ATTRIBUTE
%token LI_ATTRIBUTE
%token LINK_ATTRIBUTE
%token META_ATTRIBUTE
%token OBJECT_ATTRIBUTE
%token OL_ATTRIBUTE
%token P_ATTRIBUTE
%token PRE_ATTRIBUTE
%token SCRIPT_ATTRIBUTE
%token SPAN_ATTRIBUTE
%token STYLE_ATTRIBUTE
%token TABLE_ATTRIBUTE
%token TR_ATTRIBUTE
%token TD_TH_ATTRIBUTE
%token TEXTAREA_ATTRIBUTE
%token UL_ATTRIUTE
%token URL
%token LOCAL_URL

%token DOCTYPE_TOKEN
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
%token HEADER_
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

ARCHIVO							: DOCTYPE_DECLARATION HTML_OPEN_TAG CABEZA CUERPO HTML_CLOSE_TAG
								;

DOCTYPE_DECLARATION:			DOCTYPE_DECLARATION CLOSE
								| DOCTYPE
								;

HTML_OPEN_TAG					: HTML
								| HTML_ CLOSE
								;

HTML_CLOSE_TAG					: _HTML
								;


CABEZA_OPEN						: CABEZA_OPEN TITULO CABEZA_CLOSE
								| CABEZA_OPEN ESTILO CABEZA_CLOSE
								| CABEZA_OPEN LINK CABEZA_CLOSE
								| CABEZA_OPEN META CABEZA_CLOSE
								| CABEZA_OPEN SCRIPT CABEZA_CLOSE
								| HEAD
								| HEAD_ CLOSE
								;

CABEZA_CLOSE					: _HEAD

TITULO 							: TITULO_OPEN TITULO_CLOSE

TITULO_OPEN						: TITULO_OPEN TEXTO
								| TITLE
								;

TITULO_CLOSE					: _TITLE
								;

CUERPO 							: CUERPO_OPEN CUERPO_CLOSE

CUERPO_OPEN						: BODY
								| BODY_
								;

CUERPO_CLOSE					: _BODY



%%

void yyerror(char *s)
{
	fprintf(stderr, "Error %s\n",s);
}

int main() {
	return yyparse();
}