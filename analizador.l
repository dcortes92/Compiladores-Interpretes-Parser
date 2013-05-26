%{
	#include <stdio.h>	
	#include "y.tab.h"
%}

TEXTO						[a-z]+

NUMERO 						[0-9]+

NUMERO_255					[0-255]

HEX							[0-9A-Fa-f]+

A_ATTRIBUTE					"charset=\"" ENCODING "\"" |
							"coords=\"" NUMERO "," NUMERO "," NUMERO "," NUMERO "\""
							"href=\"" URL "\"" |
							"hreflang=\"" LANGUAGE "\"" |
							"media=\"" MEDIA_VALUE "\"" |
							"name=\"" TEXTO "\"" |
							"rel=\"" REL_VALUE "\"" |
							"rev=\"" TEXTO "\"" |
							"shape=\"" SHAPE_VALUE "\"" |
							"target=\"" TARGET_VALUE "\""

REL_VALUE				 	"alternate" |
							"author" |
							"bookmark" |
							"help" |
							"license" |
							"next" |
							"nofollow" |
							"noreferrer" |
							"prefetch" |
							"prev" |
							"search" |
							"tag" 

SHAPE_VALUE					"default" |
							"rect" |
							"circle" |
							"poly" 

BLOCKQUOTE_ATTRIBUTE		"cite=\"" URL "\""


BODY_ATTRIBUTE				"alink=\"" COLOR "\"" |
							"background=\"" URL_GENERAL "\"" |
							"bgcolor=\"" COLOR "\"" |
							"link=\"" COLOR "\"" |
							"vlink=\"" COLOR "\""

URL_GENERAL					URL |
							LOCAL_URL			

BUTTOM_ATTRIBUTE			"autofocus" |
							"disabled" |
							"formtarget=\"" TARGET_VALUE "\"" |
							"name=\"" TEXTO "\"" |
							"type=\"" BUTTOM_TYPE_VALUE "\"" |
							"value=\"" TEXTO "\""

BUTTOM_TYPE_VALUE			"button" |
							"reset" |
							"submit" 

CAPTION_ATTRIBUTE			"align=\"" ALIGN_VALUE "\""

DIV_ATTRIBUTE				"align=\"" ALIGN_VALUE "\"" |
							"style=\"" COLOR "\""

EMBED_ATTRIBUTE				"height=\"" NUMERO "\"" |
							"src=\"" URL "\"" |
							"type=\"" LOCAL_URL "\"" |
							"width=\"" NUMERO "\""

FORM_ATTRIBUTE				"accept-charset=\"" ENCODING "\"" |
							"action=\"" URL "\"" |
							"name=\"" TEXTO "\"" |
							"target=\"" TARGET_VALUE "\""

H1_H6_ATTRIBUTE				"align=\"" ALIGN_VALUE "\""

HEAD_ATTRIBUTE				"profile=\"" URL "\""

HR_ATTRIBUTE				"align=\"" ALIGN_VALUE "\"" |
							"noshade" |
							"size=\"" NUMERO "\"" |
							"width\"" NUMERO "\""
			

IMG_ATTRIBUTE				"align=\"" ALIGN_VALUE "\"" |
							"alt=\"" TEXTO "\"" |
							"border=\"" NUMERO "\"" |
							"height=\"" NUMERO "\"" |
							"ismap" |
							"longdesc=\"" URL "\"" |
							"src=\"" URL|LOCAL_URL "\"" |
							"width=\"" NUMERO "\"" |
							"usemap=\"#" TEXTO "\""
							 

ALIGN_VALUE					"top" |
							"bottom" |
							"middle" |
							"left"|
							"right"
											

INPUT_ATTRIBUTE			"accept=\"" ACCEPT_VALUE "\"" |
							"align=\"" ALIGN_VALUE "\"" |
							"alt=\"" TEXTO "\"" |
							"checked" |
							"disabled" |
							"form=\"" TEXTO "\"" |
							"formtarget=\"" TARGET_VALUE "\"" |
							"height=\"" NUMERO "\"" |
							"max=\"" NUMERO "\"" |
							"maxlength=\"" NUMERO "\"" |
							"min=\"" NUMERO "\"" |
							"name=\"" TEXTO "\"" |
							"pattern=\"" EXPRESION_REG "\"" |
							"placeholder=\"" TEXTO "\"" |
							"readonly" |
							"required" |
							"size=\"" NUMERO "\"" |
							"src=\"" URL "\"" |
							"type=\"" INPUT_TYPE_VALUE "\"" |
							"value=\"" TEXTO "\"" |
							"width=\"" NUMERO "\""
							

INPUT_TYPE_VALUE			"buttn" | 
							"checkbox" |
							"color" | 
							"date" |
							"datetime" | 
							"datetime-local" | 
							"email" |
							"file" | 
							"hidden" | 
							"image" | 
							"month" |
							"number" | 
							"password" | 
							"radio" | 
							"range" |
							"reset" | 
							"search" | 
							"submit" | 
							"text" |
							"time" | 
							"url" | 
							"week"
														

LI_ATTRIBUTE				"type=\"" LI_TYPE_VALUE "\"" |
							"value=\"" NUMERO "\""
							

LI_TYPE_VALUE				"1" | 
							"A" | 
							"a" | 
							"I" | 
							"i" | 
							"disc" |
							"square" | 
							"circle"
							

LINK_ATTRIBUTE				"charset=\"" ENCODING "\"" |
							"href=\"" URL "\"" |
							"hreflang=\"" LANGUAGE "\"" |
							"rel=\"" REL_VALUE "\"" |
							"size=\"" NUMERO "x" NUMERO "\"" |
							"target=\"" TARGET_VALUE "\"" |
							"type=\"" LOCAL_URL "\""
							


ENCODING					"UTF-8" |
							"ISO-8859-1"
							 

LANGUAGE					"en" | "es"

TARGET_VALUE				"_blank" | 
							"_self" | 
							"top" | 
							"parent" | 
							TEXTO 
							

META_ATTRIBUTE				"charset=\"" ENCODIGN "\"" |
							"content=\"" TEXT "\"" |
							"http-equiv=\"" META_HTTP_VALUE "\"" |
							"name=\"" META_NAME_VALUE "\"" |
							"scheme=\"" TEXTO "/" TEXTO "\""
							

META_HTTP_VALUE				"content_type" |
							"default-style" |
							"refresh"
							

META_NAME_VALUE				"application-name" |
							"author" |
							"description" |
							"generator" |
							"keywords"
													

OBJECT_ATTRIBUTE			"align=\"" ALIGN_VALUE "\"" |
							"archive=\"" URL "\"" |
							"border=\"" NUMERO "\"" |
							"data=\"" URL "\"" |
							"form=\"" TEXTO "\"" |
							"height=\"" NUMERO "\"" |
							"name=\"" TEXTO "\"" |
							"type=\"" TEXTO "\"" |
							"width=\"" NUMERO "\"" |
							"usemap=\"#" TEXTO "\""
														

OL_ATTRIBUTE				"compact" | 
							"reversed" |
							"start=\"" NUMERO "\"" |
							"type=\"" OL_TYPE_VALUE "\""
							

OL_TYPE_VALUE				"1" |
							"A" |
							"a" |
							"I" |
							"i" 
							
						

P_ATTRIBUTE					"align=\"" P_ALING_VALUE "\""

P_ALING_VALUE				"left" |
							"rigth" |
							"center" |
							"justify"						

PRE_ATTRIBUTE				"width=\"" NUMERO "\"" |
							

SCRIPT_ATTRIBUTE			"charset=\"" ENCODING "\"" |
							"defer" |
							"src=\"" URL "\"" |
							"type=\"" TEXT "\"" |
							"preserve"
							

SPAN_ATTRIBUTE				"name=\"" TEXTO "\"" |
							"class=\"" TEXTO "\"" |
							"style=\"" TEXTO "\"" |
							"title=\"" TEXTO "\"" |
							"dir=\"" SPAN_DIR_VALUE "\""
							

SPAN_DIR_VALUE				"rtl" |
							"ltr"

STYLE_ATTRIBUTE				"media=\"" MEDIA_VALUE "\"" |
							"scoped" | 
							"type=\"" LOCAL_URL "\""
							

MEDIA_VALUE					"all" |
							"aural" |
							"braile" |
							"handheld" |
							"projection" |
							"print" |
							"screen" |
							"tty" |
							"tv"
							

TABLE_ATTRIBUTE				"align=\"" ALIGN_VALUE "\"" |
							"bgcolor=\"" COLOR "\"" |
							"border=\"" 1 | "\"" |
							"cellpadding=\"" NUMERO "\"" |
							"cellspacing=\"" NUMERO "\"" |
							"summary=\"" TEXTO "\"" |
							"width=\"" NUMERO "\""
							

COLOR						TEXTO | 
							"#" HEX | 
							"rgb(" NUMERO_255 "," NUMERO_255 "," NUMERO_255 ")"
														

TR_ATTRIBUTE				"align=\"" T_ALIGN_VALUE "\"" |
							"bgcolor=\"" COLOR "\"" |
							"char=\"" LETRA "\"" |
							"charoff=\"" NUMERO "\"" |
							"valign=\"" VALIGN_VALUE "\""
										

TD_TH_ATTRIBUTE				"abbr=\"" TEXTO "\"" |
							"align=\"" T_ALIGN_VALUE "\"" |
							"axis=\"" TEXTO "\"" |
							"bgcolor=\"" COLOR "\"" |
							"char=\"" LETRA "\"" |
							"charoff=\"" NUMERO "\"" |
							"colspan=\"" NUMERO "\"" |
							"headers=\"" TEXTO "\"" |
							"height=\"" NUMERO "\"" |
							"rowspan=\"" NUMERO "\"" |
							"scope=\"" TD_TH_SCOPE_VALUE "\"" |
							"valign=\"" VALIGN_VALUE "\"" |
							"width=\"" NUMERO "\""
							

TD_TH_SCOPE_VALUE			"col" | 
							"colgroup" | 
							"row" | 
							"rowgroup"
							

T_ALIGN_VALUE				"rigth" |
							"left" |
							"center" |
							"justify" |
							"char"
							

VALIGN_VALUE				"top" |
							"middle" |
							"bottom" |
							"baseline"
			

TEXTAREA_ATTRIBUTE			"autofocus" |
							"cols=\"" NUMERO "\"" |
							"disabled" |
							"maxlength=\"" NUMERO "\"" |
							"name=\"" TEXTO "\"" |
							"placeholder=\"" TEXTO "\"" |
							"readonly" |
							"required" |
							"rows=\"" NUMERO "\"" |
							"wrap=\"" H_S "\""
							

H_S							"hard" |
							"soft" 
							

UL_ATTRIUTE					"compact" |
							"type=\"" UL_TYPE_VALUE "\""
							

UL_TYPE_VALUE				"disc" |
							"square" |
							"circle"
							

URL							PROTOCOLO HOST DOMINIO DOMINIO_DE_PRIMER_NIVEL (DIRECTORIO SUBDIRECTORIO RECURSO)?

PROTOCOLO					"http//" | "ftp//" | "gopher//" |
							"telnet" | "mailto" | "news"
							

HOST						"www." | 
							TEXTO"."
							

DOMINIO						TEXTO
							

DOMINIO_DE_PRIMER_NIVEL		".com" |
							".cr" |
							".es" |
							".us"
							

DIRECTORIO					"/" TEXTO |
							"" 
							

SUBDIRECTORIO				"/" TEXTO |
							""
							

RECURSO						"." TEXTO |
							""
							

LOCAL_URL					"/" TEXTO "/"

Amp							[\&]
Hash						[\#]
PComa						[\;]

					

%%						
[ \n\t]+								{return *yytext;}
"<!DOCTYPE"{TEXTO}">"					{}
"<a>"									{yylval.string = yytext; return ;}
"<a "									{yylval.string = yytext; return ;}
"<b>"									{yylval.string = yytext; return ;}
"</b>"									{yylval.string = yytext; return ;}
"<blockquote>"							{yylval.string = yytext; return ;}
"<blockquote "							{yylval.string = yytext; return ;}
"</blockquote>"							{yylval.string = yytext; return ;}
"<body>"								{yylval.string = yytext; return ;}
"<body "								{yylval.string = yytext; return ;}
"</body>"								{yylval.string = yytext; return ;}
"<br>"									{yylval.string = yytext; return ;}
"</br>"									{yylval.string = yytext; return ;}
"<button>"								{yylval.string = yytext; return ;}
"<button "								{yylval.string = yytext; return ;}
"</button>"								{yylval.string = yytext; return ;}
"<caption>"								{yylval.string = yytext; return ;}
"<caption "								{yylval.string = yytext; return ;}
"</caption>"							{yylval.string = yytext; return ;}
"<code>"								{yylval.string = yytext; return ;}
"</code>"								{yylval.string = yytext; return ;}
"<div>"									{yylval.string = yytext; return ;}
"</div>"								{yylval.string = yytext; return ;}
"<dl>"									{yylval.string = yytext; return ;}
"<dl "									{yylval.string = yytext; return ;}
"</dl>"									{yylval.string = yytext; return ;}
"<dt>"									{yylval.string = yytext; return ;}
"</dt>"									{yylval.string = yytext; return ;}
"<dd>"									{yylval.string = yytext; return ;}
"</dd>"									{yylval.string = yytext; return ;}
"<em>"									{yylval.string = yytext; return ;}
"</em>"									{yylval.string = yytext; return ;}
"<embed>"								{yylval.string = yytext; return ;}
"<embed "								{yylval.string = yytext; return ;}
"</embed>"								{yylval.string = yytext; return ;}
"<footer>"								{yylval.string = yytext; return ;}
"</footer>"								{yylval.string = yytext; return ;}
"<form>"								{yylval.string = yytext; return ;}
"<form "								{yylval.string = yytext; return ;}
"</form>"								{yylval.string = yytext; return ;}
"<h1>"									{yylval.string = yytext; return ;}
"<h1 "									{yylval.string = yytext; return ;}
"</h1>"									{yylval.string = yytext; return ;}
"<h2>"									{yylval.string = yytext; return ;}
"<h2 "									{yylval.string = yytext; return ;}
"</h2>"									{yylval.string = yytext; return ;}
"<h3>"									{yylval.string = yytext; return ;}
"<h3 "									{yylval.string = yytext; return ;}
"</h3>"									{yylval.string = yytext; return ;}
"<h4>"									{yylval.string = yytext; return ;}
"<h4 "									{yylval.string = yytext; return ;}
"</h4>"									{yylval.string = yytext; return ;}
"<h5>"									{yylval.string = yytext; return ;}
"<h5 "									{yylval.string = yytext; return ;}
"</h5>"									{yylval.string = yytext; return ;}
"<h6>"									{yylval.string = yytext; return ;}
"<h6 "									{yylval.string = yytext; return ;}
"</h6>"									{yylval.string = yytext; return ;}
"<head>"								{yylval.string = yytext; return ;}
"<head "								{yylval.string = yytext; return ;}
"</head>"								{yylval.string = yytext; return ;}
"<header>"								{yylval.string = yytext; return ;}
"</header>"								{yylval.string = yytext; return ;}
"<hr>"									{yylval.string = yytext; return ;}
"<hr "									{yylval.string = yytext; return ;}
"</hr>"									{yylval.string = yytext; return ;}
"<html>"								{printf("1.\n"); yylval.string = yytext; return HTML_TAG;}
"<html "								{printf("2.\n"); yylval.string = yytext; return NC_HTML_TAG;}
"</html>"								{printf("3.\n"); yylval.string = yytext; return C_HTML_TAG;}
"<img "									{yylval.string = yytext; return ;}
"</img>"								{yylval.string = yytext; return ;}
"<input "								{yylval.string = yytext; return ;}
"</input>"								{yylval.string = yytext; return ;}
"<label>"								{yylval.string = yytext; return ;}
"<li>"									{yylval.string = yytext; return ;}
"<li "									{yylval.string = yytext; return ;}
"</li>"									{yylval.string = yytext; return ;}
"<link "								{yylval.string = yytext; return ;}
"</link>"								{yylval.string = yytext; return ;}
"<meta "								{yylval.string = yytext; return ;}
"</meta>"								{yylval.string = yytext; return ;}
"<object "								{yylval.string = yytext; return ;}
"</object>"								{yylval.string = yytext; return ;}
"<ol>"									{yylval.string = yytext; return ;}
"<ol "									{yylval.string = yytext; return ;}
"</ol>"									{yylval.string = yytext; return ;}
"<option>"								{yylval.string = yytext; return ;}
"<option "								{yylval.string = yytext; return ;}
"</option>"								{yylval.string = yytext; return ;}
"<p>"									{yylval.string = yytext; return ;}
"<p "									{yylval.string = yytext; return ;}
"</p>"									{yylval.string = yytext; return ;}
"<pre>"									{yylval.string = yytext; return ;}
"<pre "									{yylval.string = yytext; return ;}
"</pre>"								{yylval.string = yytext; return ;}
"<script "								{yylval.string = yytext; return ;}
"</script>"								{yylval.string = yytext; return ;}
"<span "								{yylval.string = yytext; return ;}
"</span>"								{yylval.string = yytext; return ;}
"<strong>"								{yylval.string = yytext; return ;}
"</strong>"								{yylval.string = yytext; return ;}
"<style "								{yylval.string = yytext; return ;}
"</style>"								{yylval.string = yytext; return ;}
"<table "								{yylval.string = yytext; return ;}
"</table>"								{yylval.string = yytext; return ;}
"<td "									{yylval.string = yytext; return ;}
"</td>"									{yylval.string = yytext; return ;}
"<textarea "							{yylval.string = yytext; return ;}
"</textarea>"							{yylval.string = yytext; return ;}
"<th "									{yylval.string = yytext; return ;}
"</th>"									{yylval.string = yytext; return ;}
"<title>"								{yylval.string = yytext; return ;}
"</title>"								{yylval.string = yytext; return ;}
"<tr "									{yylval.string = yytext; return ;}
"</tr>"									{yylval.string = yytext; return ;}
"<ul "									{yylval.string = yytext; return ;}
"</ul>"									{yylval.string = yytext; return ;}
">"										{printf("Cerradura\n"); yylval.string = yytext; return CLOSE;}

{Amp}{Hash}[1-2]?{NUMERO}{PComa}		{}
{Amp}{Hash}[3][0-1]{PComa}				{}
"&#127;"								{}
"<>"									{}
"</>"									{}

{Amp}{Hash}{TEXTO}{PComa}				{}
{Amp}{String}+{PComa}					{}
