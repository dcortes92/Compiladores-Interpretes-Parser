%{
	#include <stdio.h>
	#include "y.tab.h"
	
	int linea = 1, columna = 1;
	void contar(void);
	void comentario(void);
	void error();
%}

LETRA						[a-z]

	
TEXTO						[a-zA-Z][a-zA-Z0-9]*


UNNUMERO 					[0-9]


NUMERO 						[0-9]+


NUMERO_255					[0-255]


HEX							[0-9A-Fa-f]+


HTML_ATTRIBUTE				(" xmlns=\""{URL}"\"")


A_ATTRIBUTE					(" charset=\""{ENCODING}"\"")|(" coords=\""{NUMERO}","{NUMERO}","{NUMERO}","{NUMERO}"\"")|(" href=\""{URL}"\"")|(" hreflang=\""{LANGUAGE}"\"")|(" media=\""{MEDIA_VALUE}"\"")|(" name=\""{TEXTO}"\"")|(" rel=\""{REL_VALUE}"\"")|(" rev=\""{TEXTO}"\"")|(" shape=\""{SHAPE_VALUE}"\"")|(" target=\""{TARGET_VALUE}"\"")


REL_VALUE				 	("alternate")|("author")|("bookmark")|("help")|("license")|("next")|("nofollow")|("noreferrer")|("prefetch")|("prev")|("search")|("tag")


SHAPE_VALUE					("default")|("rect")|("circle")|("poly")


BLOCKQUOTE_ATTRIBUTE		(" cite=\""{URL}"\"")


BODY_ATTRIBUTE				(" alink=\""{COLOR}"\"")|(" background=\""{URL_GENERAL}"\"")|(" bgcolor=\""{COLOR}"\"")|(" link=\""{COLOR}"\"")|(" vlink=\""{COLOR}"\"")


URL_GENERAL					{URL}?{LOCAL_URL}?


BUTTOM_ATTRIBUTE			(" autofocus")|(" disabled")|(" formtarget=\""{TARGET_VALUE}"\"")|(" name=\""{TEXTO}"\"")|(" type=\""{BUTTOM_TYPE_VALUE}"\"")|(" value=\""{TEXTO}"\"")


BUTTOM_TYPE_VALUE			("button")|("reset")|("submit")


CAPTION_ATTRIBUTE			(" align=\""{ALIGN_VALUE}"\"")


DIV_ATTRIBUTE				(" align=\""{ALIGN_VALUE}"\"")|(" style=\""{COLOR}"\"")


EMBED_ATTRIBUTE				(" height=\""{NUMERO}"\"")|(" src=\""{URL}"\"")|(" type=\""{LOCAL_URL}"\"")|(" width=\""{NUMERO}"\"")


FORM_ATTRIBUTE				("accept-charset=\""{ENCODING}"\"")|(" action=\""{URL}"\"")|(" name=\""{TEXTO}"\"")|(" target=\""{TARGET_VALUE}"\"")


H1_H6_ATTRIBUTE				(" align=\""{ALIGN_VALUE}"\"")


HEAD_ATTRIBUTE				(" profile=\""{URL}"\"")


HR_ATTRIBUTE				(" align=\""{ALIGN_VALUE}"\"")|("noshade")|(" size=\""{NUMERO}"\"")|("width\""{NUMERO}"\"")
			

IMG_ATTRIBUTE				(" align=\""{ALIGN_VALUE}"\"")|(" alt=\""{TEXTO}"\"")|(" border=\""{NUMERO}"\"")|(" height=\""{NUMERO}"\"")|("ismap")|(" longdesc=\""{URL}"\"")|(" src=\""{URL_GENERAL}"\"")|(" width=\""{NUMERO}"\"")|(" usemap=\"#"{TEXTO}"\"")
							 

ALIGN_VALUE					("top")|("bottom")|("middle")|("left")|("right")
											

INPUT_ATTRIBUTE				(" accept=\""{TEXTO}"\"")|(" align=\""{ALIGN_VALUE}"\"")|(" alt=\""{TEXTO}"\"")|("checked")|("disabled")|(" form=\""{TEXTO}"\"")|(" formtarget=\""{TARGET_VALUE}"\"")|(" height=\""{NUMERO}"\"")|(" max=\""{NUMERO}"\"")|(" maxlength=\""{NUMERO}"\"")|(" min=\""{NUMERO}"\"")|(" name=\""{TEXTO}"\"")|(" pattern=\""{TEXTO}"\"")|(" placeholder=\""{TEXTO}"\"")|("readonly")|("required")|(" size=\""{NUMERO}"\"")|(" src=\""{URL}"\"")|(" type=\""{INPUT_TYPE_VALUE}"\"")|(" value=\""{TEXTO}"\"")|(" width=\""{NUMERO}"\"")
							

INPUT_TYPE_VALUE			("buttn")|("checkbox")|("color")|("date")|("datetime")|("datetime-local")|("email")|("file")|("hidden")|("image")|("month")|("number")|("password")|("radio")|("range")|("reset")|("search")|("submit")|("text")|("time")|("url")|("week")
														

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
							

VALIGN_VALUE				("top")|("middle")|("bottom")|("baseline")
			

TEXTAREA_ATTRIBUTE			("autofocus")|(" cols=\""{NUMERO}"\"")|("disabled")|(" maxlength=\""{NUMERO}"\"")|(" name=\""{TEXTO}"\"")|(" placeholder=\""{TEXTO}"\"")|("readonly")|("required")|(" rows=\""{NUMERO}"\"")|(" wrap=\""{H_S}"\"")
							

H_S							("hard")|("soft")
							

UL_ATTRIUTE					("compact")|(" type=\""{UL_TYPE_VALUE}"\"")
							

UL_TYPE_VALUE				("disc")|("square")|("circle")
							

URL							{PROTOCOLO}{HOST}{DOMINIO}{DOMINIO_DE_PRIMER_NIVEL}({DIRECTORIO}{SUBDIRECTORIO}{RECURSO})


PROTOCOLO					("http//")|("ftp//")|("gopher//")|("telnet")|("mailto")|("news")
							

HOST						("www.")|({TEXTO}".")
							

DOMINIO						{TEXTO}
							

DOMINIO_DE_PRIMER_NIVEL		(".com")|(".cr")|(".es")|(".us")


DIRECTORIO					("/"{TEXTO})+
							

SUBDIRECTORIO				("/"{TEXTO})+
							

RECURSO						("."{TEXTO})


LOCAL_URL					({TEXTO}"/")+

AMP							[\&]
HASH						[\#]
PCOMA						[\;]

					

%%	

[ \n\t]+								{}

"<a"{A_ATTRIBUTE}+						{yylval.string = yytext; return A;}
"</a>"									{yylval.string = yytext; return _A;}
"<b>"									{yylval.string = yytext; return B;}
"</b>"									{yylval.string = yytext; return _B;}
"<blockquote>"							{yylval.string = yytext; return BLOCKQUOTE;}
"<blockquote"{BLOCKQUOTE_ATTRIBUTE}+	{yylval.string = yytext; return BLOCKQUOTE_;}
"</blockquote>"							{yylval.string = yytext; return _BLOCKQUOTE;}
"<body>"								{yylval.string = yytext; return BODY;}
"<body"{BODY_ATTRIBUTE}+				{yylval.string = yytext; return BODY_;}
"</body>"								{yylval.string = yytext; return _BODY;}
"<br>"									{yylval.string = yytext; return BR;}
"</br>"									{yylval.string = yytext; return _BR;}
"<button>"								{yylval.string = yytext; return BUTTON;}
"<button"{BUTTOM_ATTRIBUTE}+			{yylval.string = yytext; return BUTTON_;}
"</button>"								{yylval.string = yytext; return _BUTTON;}
"<caption>"								{yylval.string = yytext; return CAPTION;}
"<caption"{CAPTION_ATTRIBUTE}+			{yylval.string = yytext; return CAPTION_;}
"</caption>"							{yylval.string = yytext; return _CAPTION;}
"<code>"								{yylval.string = yytext; return CODE;}
"</code>"								{yylval.string = yytext; return _CODE;}
"<div>"									{yylval.string = yytext; return DIV;}
"<div"{DIV_ATTRIBUTE}+					{yylval.string = yytext; return DIV_;}
"</div>"								{yylval.string = yytext; return _DIV;}
"<dl>"									{yylval.string = yytext; return DL;}
"</dl>"									{yylval.string = yytext; return _DL;}
"<dt>"									{yylval.string = yytext; return DT;}
"</dt>"									{yylval.string = yytext; return _DT;}
"<dd>"									{yylval.string = yytext; return DD;}
"</dd>"									{yylval.string = yytext; return _DD;}
"<em>"									{yylval.string = yytext; return EM;}
"</em>"									{yylval.string = yytext; return _EM;}
"<embed"{EMBED_ATTRIBUTE}+				{yylval.string = yytext; return EMBED;}
"</embed>"								{yylval.string = yytext; return _EMBED;}
"<form>"								{yylval.string = yytext; return FORM;}
"<form"{FORM_ATTRIBUTE}+				{yylval.string = yytext; return FORM_;}
"</form>"								{yylval.string = yytext; return _FORM;}
"<h1>"									{yylval.string = yytext; return H1;}
"<h1"{H1_H6_ATTRIBUTE}+					{yylval.string = yytext; return H1_;}
"</h1>"									{yylval.string = yytext; return _H1;}
"<h2>"									{yylval.string = yytext; return H2;}
"<h2"{H1_H6_ATTRIBUTE}+					{yylval.string = yytext; return H2_;}
"</h2>"									{yylval.string = yytext; return _H2;}
"<h3>"									{yylval.string = yytext; return H3;}
"<h3"{H1_H6_ATTRIBUTE}+					{yylval.string = yytext; return H3_;}
"</h3>"									{yylval.string = yytext; return _H3;}
"<h4>"									{yylval.string = yytext; return H4;}
"<h4"{H1_H6_ATTRIBUTE}+					{yylval.string = yytext; return H4_;}
"</h4>"									{yylval.string = yytext; return _H4;}
"<h5>"									{yylval.string = yytext; return H5;}
"<h5"{H1_H6_ATTRIBUTE}+					{yylval.string = yytext; return H5_;}
"</h5>"									{yylval.string = yytext; return _H5;}
"<h6>"									{yylval.string = yytext; return H6;}
"<h6"{H1_H6_ATTRIBUTE}+					{yylval.string = yytext; return H6_;}
"</h6>"									{yylval.string = yytext; return _H6;}
"<head>"								{yylval.string = yytext; return HEAD;}
"<head"{HEAD_ATTRIBUTE}+				{yylval.string = yytext; return HEAD_;}
"</head>"								{yylval.string = yytext; return _HEAD;}
"<hr>"									{yylval.string = yytext; return HR;}
"<hr"{HR_ATTRIBUTE}+					{yylval.string = yytext; return HR_;}
"</hr>"									{yylval.string = yytext; return _HR;}
"<html>"								{yylval.string = yytext; return HTML;}
"<html"{HTML_ATTRIBUTE}					{yylval.string = yytext; return HTML_;}
"</html>"								{yylval.string = yytext; return _HTML;}
"<img"{IMG_ATTRIBUTE}+					{yylval.string = yytext; return IMG;}
"</img>"								{yylval.string = yytext; return _IMG;}
"<input"{INPUT_ATTRIBUTE}+				{yylval.string = yytext; return INPUT;}
"</input>"								{yylval.string = yytext; return _INPUT;}
"<li>"									{yylval.string = yytext; return LI;}
"<li"{LI_ATTRIBUTE}+					{yylval.string = yytext; return LI_;}
"</li>"									{yylval.string = yytext; return _LI;}
"<link"{LINK_ATTRIBUTE}+				{yylval.string = yytext; return LINK;}
"</link>"								{yylval.string = yytext; return _LINK;}
"<meta"{META_ATTRIBUTE}+				{yylval.string = yytext; return META;}
"</meta>"								{yylval.string = yytext; return _META;}
"<ol>"									{yylval.string = yytext; return OL;}
"<ol"{OL_ATTRIBUTE}+					{yylval.string = yytext; return OL_;}
"</ol>"									{yylval.string = yytext; return _OL;}
"<p>"									{yylval.string = yytext; return P;}
"<p"{P_ATTRIBUTE}+						{yylval.string = yytext; return P_;}
"</p>"									{yylval.string = yytext; return _P;}
"<pre>"									{yylval.string = yytext; return PRE;}
"<pre"{PRE_ATTRIBUTE}+					{yylval.string = yytext; return PRE_;}
"</pre>"								{yylval.string = yytext; return _PRE;}
"<script>"								{yylval.string = yytext; return SCRIPT;}
"<script"{SCRIPT_ATTRIBUTE}+			{yylval.string = yytext; return SCRIPT_;}
"</script>"								{yylval.string = yytext; return _SCRIPT;}
"<span"{SPAN_ATTRIBUTE}+				{yylval.string = yytext; return SPAN;}
"</span>"								{yylval.string = yytext; return _SPAN;}
"<strong>"								{yylval.string = yytext; return STRONG;}
"</strong>"								{yylval.string = yytext; return _STRONG;}
"<style"{STYLE_ATTRIBUTE}+				{yylval.string = yytext; return STYLE;}
"</style>"								{yylval.string = yytext; return _STYLE;}
"<table"{TABLE_ATTRIBUTE}+				{yylval.string = yytext; return TABLE;}
"</table>"								{yylval.string = yytext; return _TABLE;}
"<td"{TD_TH_ATTRIBUTE}+					{yylval.string = yytext; return TD;}
"</td>"									{yylval.string = yytext; return _TD;}
"<textarea>"							{yylval.string = yytext; return TEXTAREA;}
"<textarea"{TEXTAREA_ATTRIBUTE}+		{yylval.string = yytext; return TEXTAREA_;}
"</textarea>"							{yylval.string = yytext; return _TEXTAREA;}
"<th"{TD_TH_ATTRIBUTE}+					{yylval.string = yytext; return TH;}
"</th>"									{yylval.string = yytext; return _TH;}
"<title>"								{yylval.string = yytext; return TITLE;}
"</title>"								{yylval.string = yytext; return _TITLE;}
"<tr"{TR_ATTRIBUTE}+					{yylval.string = yytext; return TR;}
"</tr>"									{yylval.string = yytext; return _TR;}
"<ul"{UL_ATTRIUTE}+						{yylval.string = yytext; return UL;}
"</ul>"									{yylval.string = yytext; return _UL;}
">"										{yylval.string = yytext; return CLOSE;}						
{TEXTO}									{yylval.string = yytext; return TEXTO;}

{AMP}{HASH}[1-2]?{UNNUMERO}{PCOMA}		{error();}
{AMP}{HASH}[3][0-1]{PCOMA}				{error();}
"&#127;"								{error();}
"<>"									{error();}
"</>"									{error();}
{AMP}{HASH}{TEXTO}{PCOMA}				{return TEXTO;}
{AMP}{TEXTO}{PCOMA}						{return TEXTO;}

.										{return ERROR; }


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
	fprintf(stderr,"Error en linea %d, columna %d : comentario sin terminar\n", linea, columna);
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
	fprintf(stderr,"Caracter inválido en linea: %d columna: %d caracter: %s\n", linea, columna, yytext);
	columna += yyleng;
}