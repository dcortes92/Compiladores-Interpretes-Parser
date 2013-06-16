%{
	#include <stdio.h>
	#include "y.tab.h"
	#include <string.h>
	
	int linea = 1, columna = 1;
	void contar(void);
	void comentario(void);
	void error();
	
	#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno; \
	yylloc.first_column = yylloc.last_column = columna + yyleng - 1;\

%}

%option yylineno

ATRIBUTO					([ ]{TEXTO}("=\""){TEXTO_2}("\""))|([ ]{TEXTO_2})


LETRA						[a-z]

	
TEXTO						[a-zA-Z][a-zA-Z0-9 ]*

TEXTO_2						[a-zA-Z][a-zA-Z0-9\- ]*


TEXTOURL					[a-zA-Z0-9\.]+


UNNUMERO 					[0-9]


NUMERO 						[0-9]+


NUMERO_255					[0-255]


HEX							[0-9A-Fa-f]+


DOCTYPE						("<!DOCTYPE html>")|("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">")|(" <!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">")|("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Frameset//EN\" \"http://www.w3.org/TR/html4/frameset.dtd\">")|("<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">")|("<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">")|("<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Frameset//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-frameset.dtd\">")


HTML_ATTRIBUTE				(" xmlns=\""{URL}"\"")


A_ATTRIBUTE					(" charset=\""{ENCODING}"\"")|(" coords=\""{NUMERO}","{NUMERO}","{NUMERO}","{NUMERO}"\"")|(" href=\""{URL}"\"")|(" hreflang=\""{LANGUAGE}"\"")|(" media=\""{MEDIA_VALUE}"\"")|(" name=\""{TEXTO}"\"")|(" rel=\""{REL_VALUE}"\"")|(" rev=\""{TEXTO}"\"")|(" shape=\""{SHAPE_VALUE}"\"")|(" target=\""{TARGET_VALUE}"\"")


REL_VALUE				 	("alternate")|("author")|("bookmark")|("help")|("license")|("next")|("nofollow")|("noreferrer")|("prefetch")|("prev")|("search")|("tag")


SHAPE_VALUE					("default")|("rect")|("circle")|("poly")


BLOCKQUOTE_ATTRIBUTE		(" cite=\""{URL}"\"")


BODY_ATTRIBUTE				(" alink=\""{COLOR}"\"")|(" background=\""{URL_GENERAL}"\"")|(" bgcolor=\""{COLOR}"\"")|(" link=\""{COLOR}"\"")|(" vlink=\""{COLOR}"\"")


URL_GENERAL					{URL}|{LOCAL_URL}


BUTTOM_ATTRIBUTE			(" autofocus")|(" disabled")|(" formtarget=\""{TARGET_VALUE}"\"")|(" name=\""{TEXTO}"\"")|(" type=\""{BUTTOM_TYPE_VALUE}"\"")|(" value=\""{TEXTO}"\"")


BUTTOM_TYPE_VALUE			("button")|("reset")|("submit")


CAPTION_ATTRIBUTE			(" align=\""{ALIGN_VALUE}"\"")


DIV_ATTRIBUTE				(" align=\""{ALIGN_VALUE}"\"")|(" style=\""{COLOR}"\"")


EMBED_ATTRIBUTE				(" height=\""{NUMERO}"\"")|(" src=\""{URL}"\"")|(" type=\""{LOCAL_URL}"\"")|(" width=\""{NUMERO}"\"")


FORM_ATTRIBUTE				(" accept-charset=\""{ENCODING}"\"")|(" action=\""{URL}"\"")|(" name=\""{TEXTO}"\"")|(" target=\""{TARGET_VALUE}"\"")


H1_H6_ATTRIBUTE				(" align=\""{ALIGN_VALUE}"\"")


HR_ATTRIBUTE				(" align=\""{ALIGN_VALUE}"\"")|("noshade")|(" size=\""{NUMERO}"\"")|("width\""{NUMERO}"\"")
			

IMG_ATTRIBUTE				(" align=\""{ALIGN_VALUE}"\"")|(" alt=\""{TEXTO}"\"")|(" border=\""{NUMERO}"\"")|(" height=\""{NUMERO}"\"")|("ismap")|(" longdesc=\""{URL}"\"")|(" src=\""{URL_GENERAL}"\"")|(" width=\""{NUMERO}"\"")|(" usemap=\"#"{TEXTO}"\"")
							 

ALIGN_VALUE					("top")|("bottom")|("middle")|("left")|("right")
											

INPUT_ATTRIBUTE				(" accept=\""{TEXTO}"\"")|(" align=\""{ALIGN_VALUE}"\"")|(" alt=\""{TEXTO}"\"")|("checked")|("disabled")|(" form=\""{TEXTO}"\"")|(" formtarget=\""{TARGET_VALUE}"\"")|(" height=\""{NUMERO}"\"")|(" max=\""{NUMERO}"\"")|(" maxlength=\""{NUMERO}"\"")|(" min=\""{NUMERO}"\"")|(" name=\""{TEXTO}"\"")|(" pattern=\""{TEXTO}"\"")|(" placeholder=\""{TEXTO}"\"")|("readonly")|("required")|(" size=\""{NUMERO}"\"")|(" src=\""{URL}"\"")|(" type=\""{INPUT_TYPE_VALUE}"\"")|(" value=\""{TEXTO}"\"")|(" width=\""{NUMERO}"\"")
							

INPUT_TYPE_VALUE			("button")|("checkbox")|("color")|("date")|("datetime")|("datetime-local")|("email")|("file")|("hidden")|("image")|("month")|("number")|("password")|("radio")|("range")|("reset")|("search")|("submit")|("text")|("time")|("url")|("week")
														

LI_ATTRIBUTE				(" type=\""{LI_TYPE_VALUE}"\"")|(" value=\""{NUMERO}"\"")
							

LI_TYPE_VALUE				("1")|("a")|("i")|("disc")|("square")|("circle")
							

LINK_ATTRIBUTE				(" charset=\""{ENCODING}"\"")|(" href=\""{URL}"\"")|(" hreflang=\""{LANGUAGE}"\"")|(" rel=\""{REL_VALUE}"\"")|(" size=\""{NUMERO}"x"{NUMERO}"\"")|(" target=\""{TARGET_VALUE}"\"")|(" type=\""{LOCAL_URL}"\"")
							

ENCODING					("UTF-8")|("ISO-8859-1")
							 

LANGUAGE					("en")|("es")


TARGET_VALUE				("_blank")|("_self")|("top")|("parent")|({TEXTO})
							

META_ATTRIBUTE				(" charset=\""{ENCODING}"\"")|(" content=\""{TEXTO}"\"")|("http-equiv=\""{META_HTTP_VALUE}"\"")|(" name=\""{META_NAME_VALUE}"\"")|(" scheme=\""{TEXTO}"/"{TEXTO}"\"")
							

META_HTTP_VALUE				("content_type")|("default-style")|("refresh")
							

META_NAME_VALUE				("application-name")|("author")|("description")|("generator")|("keywords")
													

OBJECT_ATTRIBUTE			(" align=\""{ALIGN_VALUE}"\"")|(" archive=\""{URL}"\"")|(" border=\""{NUMERO}"\"")|(" data=\""{URL}"\"")|(" form=\""{TEXTO}"\"")|(" height=\""{NUMERO}"\"")|(" name=\""{TEXTO}"\"")|(" type=\""{TEXTO}"\"")|(" width=\""{NUMERO}"\"")|(" usemap=\"#"{TEXTO}"\"")
														

OL_ATTRIBUTE				("compact")|("reversed")|(" start=\""{NUMERO}"\"")|(" type=\""{OL_TYPE_VALUE}"\"")
							

OL_TYPE_VALUE				("1")|("a")|("i")
							

P_ATTRIBUTE					(" align=\""{P_ALING_VALUE}"\"")


P_ALING_VALUE				("left")|("rigth")|("center")|("justify")				


PRE_ATTRIBUTE				(" width=\""{NUMERO}"\"")
							

SCRIPT_ATTRIBUTE			(" charset=\""{ENCODING}"\"")|(" defer")|(" src=\""{URL}"\"")|(" type=\""{TEXTO}"\"")|(" preserve")
							

SPAN_ATTRIBUTE				(" name=\""{TEXTO}"\"")|(" class=\""{TEXTO}"\"")|(" style=\""{TEXTO}"\"")|(" title=\""{TEXTO}"\"")|(" dir=\""{SPAN_DIR_VALUE}"\"")						


SPAN_DIR_VALUE				("rtl")|("ltr")


STYLE_ATTRIBUTE				(" media=\""{MEDIA_VALUE}"\"")|("scoped")|(" type=\""{LOCAL_URL}"\"")
							

MEDIA_VALUE					("all")|("aural")|("braile")|("handheld")|("projection")|("print")|("screen")|("tty")|("tv")
							

TABLE_ATTRIBUTE				(" align=\""{ALIGN_VALUE}"\"")|(" bgcolor=\""{COLOR}"\"")|(" border=\"1\"")|(" cellpadding=\""{NUMERO}"\"")|(" cellspacing=\""{NUMERO}"\"")|(" summary=\""{TEXTO}"\"")|(" width=\""{NUMERO}"\"")
							

COLOR						({TEXTO})|("#"{HEX})|("rgb("{NUMERO_255}","{NUMERO_255}","{NUMERO_255}")")
														

TR_ATTRIBUTE				(" align=\""{T_ALIGN_VALUE}"\"")|(" bgcolor=\""{COLOR}"\"")|(" char=\""{LETRA}"\"")|(" charoff=\""{NUMERO}"\"")|(" valign=\""{VALIGN_VALUE}"\"")
										

TD_TH_ATTRIBUTE				(" abbr=\""{TEXTO}"\"")|(" align=\""{T_ALIGN_VALUE}"\"")|(" axis=\""{TEXTO}"\"")|(" bgcolor=\""{COLOR}"\"")|(" char=\""{LETRA}"\"")|(" charoff=\""{NUMERO}"\"")|(" colspan=\""{NUMERO}"\"")|(" headers=\""{TEXTO}"\"")|(" height=\""{NUMERO}"\"")|(" rowspan=\""{NUMERO}"\"")|(" scope=\""{TD_TH_SCOPE_VALUE}"\"")|(" valign=\""{VALIGN_VALUE}"\"")|(" width=\""{NUMERO}"\"")
							

TD_TH_SCOPE_VALUE			("col")|("colgroup")|("row")|("rowgroup")
							

T_ALIGN_VALUE				("rigth")|("left")|("center")|("justify")|("char")
							

TEXTAREA_ATTRIBUTE			(" autofocus")|(" cols=\""{NUMERO}"\"")|("disabled")|(" maxlength=\""{NUMERO}"\"")|(" name=\""{TEXTO}"\"")|(" placeholder=\""{TEXTO}"\"")|("readonly")|("required")|(" rows=\""{NUMERO}"\"")|(" wrap=\""{H_S}"\"")


VALIGN_VALUE				("top")|("middle")|("bottom")|("baseline")							

H_S							("hard")|("soft")
							

UL_ATTRIUTE					(" compact")|(" type=\""{UL_TYPE_VALUE}"\"")
							

UL_TYPE_VALUE				("disc")|("square")|("circle")
							

URL							{PROTOCOLO}{HOST}{DOMINIO}{DOMINIO_DE_PRIMER_NIVEL}({DIRECTORIO})?


PROTOCOLO					("http://")|("ftp://")|("gopher://")|("telnet")|("mailto")|("news")
							

HOST						("www.")
							

DOMINIO						{TEXTOURL}
							

DOMINIO_DE_PRIMER_NIVEL		(".com")|(".cr")|(".es")|(".us")|(".org")


DIRECTORIO					("/"{TEXTOURL})+
														

RECURSO						("."{TEXTO})


LOCAL_URL					({TEXTOURL}"/")+

AMP							[\&]
HASH						[\#]
PCOMA						[\;]

					

%%	

[\n]									{linea++;}
"<!--"									{comentario();}
{DOCTYPE}								{return DOCTYPE;}
"<a"{A_ATTRIBUTE}+						{return A;}
"</a>"									{return _A;}
"<b>"									{return B;}
"</b>"									{return _B;}
"<blockquote>"							{return BLOCKQUOTE;}
"<blockquote"{BLOCKQUOTE_ATTRIBUTE}+	{return BLOCKQUOTE_;}
"</blockquote>"							{return _BLOCKQUOTE;}
"<body>"								{return BODY;}
"<body"{BODY_ATTRIBUTE}+				{return BODY_;}
"</body>"								{return _BODY;}
"<br>"									{return BR;}
"</br>"									{return _BR;}
"<button>"								{return BUTTON;}
"<button"{BUTTOM_ATTRIBUTE}+			{return BUTTON_;}
"</button>"								{return _BUTTON;}
"<caption>"								{return CAPTION;}
"<caption"{CAPTION_ATTRIBUTE}+			{return CAPTION_;}
"</caption>"							{return _CAPTION;}
"<code>"								{return CODE;}
"</code>"								{return _CODE;}
"<div>"									{return DIV;}
"<div"{DIV_ATTRIBUTE}+					{return DIV_;}
"</div>"								{return _DIV;}
"<dl>"									{return DL;}
"</dl>"									{return _DL;}
"<dt>"									{return DT;}
"</dt>"									{return _DT;}
"<dd>"									{return DD;}
"</dd>"									{return _DD;}
"<em>"									{return EM;}
"</em>"									{return _EM;}
"<embed"{EMBED_ATTRIBUTE}+				{return EMBED;}
"</embed>"								{return _EMBED;}
"<form>"								{return FORM;}
"<form"{FORM_ATTRIBUTE}+				{return FORM_;}
"</form>"								{return _FORM;}
"<h1>"									{return H1;}
"<h1"{H1_H6_ATTRIBUTE}+					{return H1_;}
"</h1>"									{return _H1;}
"<h2>"									{return H2;}
"<h2"{H1_H6_ATTRIBUTE}+					{return H2_;}
"</h2>"									{return _H2;}
"<h3>"									{return H3;}
"<h3"{H1_H6_ATTRIBUTE}+					{return H3_;}
"</h3>"									{return _H3;}
"<h4>"									{return H4;}
"<h4"{H1_H6_ATTRIBUTE}+					{return H4_;}
"</h4>"									{return _H4;}
"<h5>"									{return H5;}
"<h5"{H1_H6_ATTRIBUTE}+					{return H5_;}
"</h5>"									{return _H5;}
"<h6>"									{return H6;}
"<h6"{H1_H6_ATTRIBUTE}+					{return H6_;}
"</h6>"									{return _H6;}
"<head>"								{return HEAD;}
"</head>"								{return _HEAD;}
"<hr>"									{return HR;}
"<hr"{HR_ATTRIBUTE}+					{return HR_;}
"</hr>"									{return _HR;}
"<html"{HTML_ATTRIBUTE}					{return HTML;}
"</html>"								{return _HTML;}
"<img"{IMG_ATTRIBUTE}+					{return IMG;}
"</img>"								{return _IMG;}
"<input"{INPUT_ATTRIBUTE}+				{return INPUT;}
"</input>"								{return _INPUT;}
"<li>"									{return LI;}
"<li"{LI_ATTRIBUTE}+					{return LI_;}
"</li>"									{return _LI;}
"<link"{LINK_ATTRIBUTE}+				{return LINK;}
"</link>"								{return _LINK;}
"<meta"{META_ATTRIBUTE}+				{return META;}
"</meta>"								{return _META;}
"<ol>"									{return OL;}
"<ol"{OL_ATTRIBUTE}+					{return OL_;}
"</ol>"									{return _OL;}
"<p>"									{return P;}
"<p"{P_ATTRIBUTE}+						{return P_;}
"</p>"									{return _P;}
"<script>"								{return SCRIPT;}
"<script"{SCRIPT_ATTRIBUTE}+			{return SCRIPT_;}
"</script>"								{return _SCRIPT;}
"<span"{SPAN_ATTRIBUTE}+				{return SPAN;}
"</span>"								{return _SPAN;}
"<strong>"								{return STRONG;}
"</strong>"								{return _STRONG;}
"<style"{STYLE_ATTRIBUTE}+				{return STYLE;}
"</style>"								{return _STYLE;}
"<table"{TABLE_ATTRIBUTE}+				{return TABLE;}
"</table>"								{return _TABLE;}
"<td"{TD_TH_ATTRIBUTE}+					{return TD;}
"</td>"									{return _TD;}
"<textarea>"							{return TEXTAREA;}
"<textarea"{TEXTAREA_ATTRIBUTE}+		{return TEXTAREA_;}
"</textarea>"							{return _TEXTAREA;}
"<th"{TD_TH_ATTRIBUTE}+					{return TH;}
"</th>"									{return _TH;}
"<title>"								{return TITLE;}
"</title>"								{return _TITLE;}
"<tr"{TR_ATTRIBUTE}+					{return TR;}
"</tr>"									{return _TR;}
"<ul"{UL_ATTRIUTE}+						{return UL;}
"</ul>"									{return _UL;}
">"										{return CLOSE;}						

"<a"{ATRIBUTO}+							{yylval.string = strdup(yytext); return A_TAG_ERROR;}/*Lleva*/
"<blockquote"{ATRIBUTO}+				{yylval.string = strdup(yytext); return BLOCKQUOTE_TAG_ERROR;}/*Lleva o no*/
"<body"{ATRIBUTO}+						{yylval.string = strdup(yytext); return BODY_TAG_ERROR;}/*Lleva o no*/
"<button"{ATRIBUTO}+					{yylval.string = strdup(yytext); return BUTTON_TAG_ERROR;}/*Lleva o no*/
"<caption"{ATRIBUTO}+					{yylval.string = strdup(yytext); return CAPTION_TAG_ERROR;}/*Lleva o no*/
"<div"{ATRIBUTO}+						{yylval.string = strdup(yytext); return DIV_TAG_ERROR;}/*Lleva o no*/
"<embed"{ATRIBUTO}+						{yylval.string = strdup(yytext); return EMBED_TAG_ERROR;}/*Lleva*/
"<form"{ATRIBUTO}+						{yylval.string = strdup(yytext); return FORM_TAG_ERROR;}/*Lleva o no*/
"<h1"{ATRIBUTO}+						{yylval.string = strdup(yytext); return H1_TAG_ERROR;}/*Lleva o no*/
"<h2"{ATRIBUTO}+						{yylval.string = strdup(yytext); return H2_TAG_ERROR;}/*Lleva o no*/
"<h3"{ATRIBUTO}+						{yylval.string = strdup(yytext); return H3_TAG_ERROR;}/*Lleva o no*/
"<h4"{ATRIBUTO}+						{yylval.string = strdup(yytext); return H4_TAG_ERROR;}/*Lleva o no*/
"<h5"{ATRIBUTO}+						{yylval.string = strdup(yytext); return H5_TAG_ERROR;}/*Lleva o no*/
"<h6"{ATRIBUTO}+						{yylval.string = strdup(yytext); return H6_TAG_ERROR;}/*Lleva o no*/
"<hr"{ATRIBUTO}+						{yylval.string = strdup(yytext); return HR_TAG_ERROR;}/*Lleva o no*/
"<html"{ATRIBUTO}+						{yylval.string = strdup(yytext); return HTML_TAG_ERROR;}/*Lleva*/
"<img"{ATRIBUTO}+						{yylval.string = strdup(yytext); return IMG_TAG_ERROR;}/*Lleva*/
"<input"{ATRIBUTO}+						{yylval.string = strdup(yytext); return INPUT_TAG_ERROR;}/*Lleva*/
"<li"{ATRIBUTO}+						{yylval.string = strdup(yytext); return LI_TAG_ERROR;}/*Lleva o no*/
"<link"{ATRIBUTO}+						{yylval.string = strdup(yytext); return LINK_TAG_ERROR;}/*Lleva*/
"<meta"{ATRIBUTO}+						{yylval.string = strdup(yytext); return META_TAG_ERROR;}/*Lleva*/
"<ol"{ATRIBUTO}+						{yylval.string = strdup(yytext); return OL_TAG_ERROR;}/*Lleva o no*/
"<p"{ATRIBUTO}+							{yylval.string = strdup(yytext); return P_TAG_ERROR;}/*Lleva o no*/
"<script"{ATRIBUTO}+					{yylval.string = strdup(yytext); return SCRIPT_TAG_ERROR;}/*Lleva o no*/
"<span"{ATRIBUTO}+						{yylval.string = strdup(yytext); return SPAN_TAG_ERROR;}/*Lleva*/
"<style"{ATRIBUTO}+						{yylval.string = strdup(yytext); return STYLE_TAG_ERROR;}/*Lleva*/
"<table"{ATRIBUTO}+						{yylval.string = strdup(yytext); return TABLE_TAG_ERROR;}/*Lleva*/
"<td"{ATRIBUTO}+						{yylval.string = strdup(yytext); return TD_TAG_ERROR;}/*Lleva*/
"<textarea"{ATRIBUTO}+					{yylval.string = strdup(yytext); return TEXTAREA_TAG_ERROR;}/*Lleva o no*/
"<th"{ATRIBUTO}+						{yylval.string = strdup(yytext); return TH_TAG_ERROR;}/*Lleva*/
"<tr"{ATRIBUTO}+						{yylval.string = strdup(yytext); return TR_TAG_ERROR;}/*Lleva*/
"<ul"{ATRIBUTO}+						{yylval.string = strdup(yytext); return UL_TAG_ERROR;}/*Lleva*/


{TEXTO}									{return TEXTO;}


{AMP}{HASH}[1-2]?{UNNUMERO}{PCOMA}		{error();}
{AMP}{HASH}[3][0-1]{PCOMA}				{error();}
"&#127;"								{error();}
"<>"									{error();}
"</>"									{error();}
{AMP}{HASH}{TEXTO}{PCOMA}				{return TEXTO;}
{AMP}{TEXTO}{PCOMA}						{return TEXTO;}

%%


void comentario()
{
	char c, ante1 = 0, ante2 = 0;
    
	while ((c = input()) != EOF)
	{
		if (c == '>' && ante1 == '-' && ante2 == '-'){
			/*printf("correcto\n");*/
			return;
		}
		else if(c == '\n')
		{
			linea++;
		}
		ante2 = ante1;
		ante1 = c;
	}
	fprintf(stderr,"Error: se abre '<!--' en línea %d columna %d. Se espera '-->'\n", yylloc.first_line, yylloc.first_column);
}

void contar()
{
	int i;		
	for (i = 0; yytext[i] != '\0'; i++)
	{			
		if (yytext[i] == '\n')
		{
			linea++;
			columna = 1;
		}
		else if (yytext[i] == '\t')
		{
			columna += 8 - (columna % 8);
		}
		else
		{
			columna++;
		}
	}
}

void error()
{	
	fprintf(stderr,"Caracter inválido en linea: %d columna: %d caracter: %s\n", yylloc.first_line, yylloc.first_column, yytext);
	columna += yyleng;
}
