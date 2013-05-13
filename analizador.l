%{
	#include <stdio.h>
	
	/*mae tengo mas o menos una idea de como hacer algo que nos ayuda pero no se como 
	  hacer las listas que tengo en mente.
	  Mi idea es algo asi
	  digamos que el archivo es algo asi: <a></a> <b><p></p></b>
	  entonces lo que pienso mejor es hacer listas de listas(eso es lo que no se como hacer)
	  en ese caso quedaria una lista algo asi:
	  
	  ___________________       ______________________________________
	  | _____    ______ |       | _____    _____    ______    ______ |
	  | |<a>| -> |</a>| | ----> | |<b>| -> |<p>| -> |</p>| -> |</b>| |
	  | -----    ------ |       | -----    -----    ------    ------ |
	  -------------------	    --------------------------------------
	  
	  entonces usar esas listas para los analisis.
	  yo mas o menos tengo un seudocodigo para analizarlas, pero ese codigo seria en
	  el caso del analizador sintactico. Lo importante creo yo es lograr esas listas que despues
	  nos van a servir un monton.
	  Yo creo q tambien nos serviria en ese nodo guardar cosas como: linea donde estan,
	  la columna donde estan, entre otros.
	  */
	  
	  
	struct nodo{
		char etiqueta[20];
		struct nodo *siguiente;
		int linea;
		int columna;
		int largo;
	};
	
	struct node *listaEtiquetas;
	struct node *listaEtiquetasTemporal;
	/*listaEtiquetas->siguiente = 0;*/
	
	int linea = 1, columna = 1;
	void contar(void);
	void comentario(void);
	void error(void);
%}

String		[^<>&]
StringC		[^\"]
Digito		[0-9]
Espacios	[ ]*
Etiqueta	{Espacios}[a-z][a-z0-9]*{Espacios}
Comillas	[\"]
Atributo	{StringC}*(\=){Espacios}{Comillas}{StringC}*{Comillas}|{String}*
Cerradura	[\>]
Amp		[\&]
Hash		[\#]
PComa		[\;]		

%%


"<!--"							{printf("Encontr tag <!-- en linea: %d y columna: %d\n", linea, columna);comentario();}
"<!DOCTYPE"{String}+">"				{printf("Encontro tag !DOCTYPE en linea: %d y columna: %d\n",linea, columna);contar();}
[ \n\t]+					{printf("Encontro Enter-Tab-Space\n",yytext);contar();}
"<a>"						{printf("Encontro tag A en linea: %d y columna: %d\n",linea, columna);contar();}
"<a "{Atributo}*">"				{printf("Encontro tag A en linea: %d y columna: %d\n",linea, columna);contar();}
"</a>"						{printf("Encontro tag A en linea: %d y columna: %d\n",linea, columna);contar();}
"<acronym>"					{printf("Encontro tag ACRONYM en linea: %d y columna: %d\n",linea, columna);contar();}
"<acronym "{Atributo}*">"			{printf("Encontro tag ACRONYM en linea: %d y columna: %d\n",linea, columna);contar();}
"</acronym>"					{printf("Encontro tag ACRONYM en linea: %d y columna: %d\n",linea, columna);contar();}
"<address>"					{printf("Encontro tag ADDRESS en linea: %d y columna: %d\n",linea, columna);contar();}
"<address "{Atributo}*">"			{printf("Encontro tag ADDRESS en linea: %d y columna: %d\n",linea, columna);contar();}
"</address>"					{printf("Encontro tag ADDRESS en linea: %d y columna: %d\n",linea, columna);contar();}
"<applet>"					{printf("Encontro tag APPLET en linea: %d y columna: %d\n",linea, columna);contar();}
"<applet "{Atributo}*">"			{printf("Encontro tag APPLET en linea: %d y columna: %d\n",linea, columna);contar();}
"</applet>"					{printf("Encontro tag APPLET en linea: %d y columna: %d\n",linea, columna);contar();}
"<area>"					{printf("Encontro tag AREA en linea: %d y columna: %d\n",linea, columna);contar();}
"<area "{Atributo}*">"				{printf("Encontro tag AREA en linea: %d y columna: %d\n",linea, columna);contar();}
"</area>"					{printf("Encontro tag AREA en linea: %d y columna: %d\n",linea, columna);contar();}
"<b>"						{printf("Encontro tag B en linea: %d y columna: %d\n",linea, columna);contar();}
"<b "{Atributo}*">"				{printf("Encontro tag B en linea: %d y columna: %d\n",linea, columna);contar();}
"</b>"						{printf("Encontro tag B en linea: %d y columna: %d\n",linea, columna);contar();}
"<base>"					{printf("Encontro tag BASE en linea: %d y columna: %d\n",linea, columna);contar();}
"<base "{Atributo}*">"				{printf("Encontro tag BASE en linea: %d y columna: %d\n",linea, columna);contar();}
"</base>"					{printf("Encontro tag BASE en linea: %d y columna: %d\n",linea, columna);contar();}
"<basefont>"					{printf("Encontro tag BASEFONT en linea: %d y columna: %d\n",linea, columna);contar();}
"<basefont "{Atributo}*">"			{printf("Encontro tag BASEFONT en linea: %d y columna: %d\n",linea, columna);contar();}
"</basefont>"					{printf("Encontro tag BASEFONT en linea: %d y columna: %d\n",linea, columna);contar();}
"<bdo>"						{printf("Encontro tag BDO en linea: %d y columna: %d\n",linea, columna);contar();}
"<bdo "{Atributo}*">"				{printf("Encontro tag BDO en linea: %d y columna: %d\n",linea, columna);contar();}
"</bdo>"					{printf("Encontro tag BDO en linea: %d y columna: %d\n",linea, columna);contar();}
"<big>"						{printf("Encontro tag BIG en linea: %d y columna: %d\n",linea, columna);contar();}
"<big "{Atributo}*">"				{printf("Encontro tag BIG en linea: %d y columna: %d\n",linea, columna);contar();}
"</big>"					{printf("Encontro tag BIG en linea: %d y columna: %d\n",linea, columna);contar();}
"<blockquote>"					{printf("Encontro tag BLOCKQUOTE en linea: %d y columna: %d\n",linea, columna);contar();}
"<blockquote "{Atributo}*">"			{printf("Encontro tag BLOCKQUOTE en linea: %d y columna: %d\n",linea, columna);contar();}
"</blockquote>"					{printf("Encontro tag BLOCKQUOTE en linea: %d y columna: %d\n",linea, columna);contar();}
"<body>"					{printf("Encontro tag BODY en linea: %d y columna: %d\n",linea, columna);contar();}
"<body "{Atributo}*">"				{printf("Encontro tag BODY en linea: %d y columna: %d\n",linea, columna);contar();}
"</body>"					{printf("Encontro tag BODY en linea: %d y columna: %d\n",linea, columna);contar();}
"<br>"						{printf("Encontro tag BR en linea: %d y columna: %d\n",linea, columna);contar();}
"<br "{Atributo}*">"				{printf("Encontro tag BR en linea: %d y columna: %d\n",linea, columna);contar();}
"</br>"						{printf("Encontro tag BR en linea: %d y columna: %d\n",linea, columna);contar();}
"<button>"					{printf("Encontro tag BUTTON en linea: %d y columna: %d\n",linea, columna);contar();}
"<button "{Atributo}*">"			{printf("Encontro tag BUTTON en linea: %d y columna: %d\n",linea, columna);contar();}
"</button>"					{printf("Encontro tag BUTTON en linea: %d y columna: %d\n",linea, columna);contar();}
"<caption>"					{printf("Encontro tag CAPTION en linea: %d y columna: %d\n",linea, columna);contar();}
"<caption "{Atributo}*">"			{printf("Encontro tag CAPTION en linea: %d y columna: %d\n",linea, columna);contar();}
"</caption>"					{printf("Encontro tag CAPTION en linea: %d y columna: %d\n",linea, columna);contar();}
"<center>"					{printf("Encontro tag CENTER en linea: %d y columna: %d\n",linea, columna);contar();}
"<center "{Atributo}*">"			{printf("Encontro tag CENTER en linea: %d y columna: %d\n",linea, columna);contar();}
"</center>"					{printf("Encontro tag CENTER en linea: %d y columna: %d\n",linea, columna);contar();}
"<cite>"					{printf("Encontro tag CITE en linea: %d y columna: %d\n",linea, columna);contar();}
"<cite "{Atributo}*">"				{printf("Encontro tag CITE en linea: %d y columna: %d\n",linea, columna);contar();}
"</cite>"					{printf("Encontro tag CITE en linea: %d y columna: %d\n",linea, columna);contar();}
"<code>"					{printf("Encontro tag CODE en linea: %d y columna: %d\n",linea, columna);contar();}
"<code "{Atributo}*">"				{printf("Encontro tag CODE en linea: %d y columna: %d\n",linea, columna);contar();}
"</code>"					{printf("Encontro tag CODE en linea: %d y columna: %d\n",linea, columna);contar();}
"<col>"						{printf("Encontro tag COL en linea: %d y columna: %d\n",linea, columna);contar();}
"<col "{Atributo}*">"				{printf("Encontro tag COL en linea: %d y columna: %d\n",linea, columna);contar();}
"</col>"					{printf("Encontro tag COL en linea: %d y columna: %d\n",linea, columna);contar();}
"<colgroup>"					{printf("Encontro tag COLGROUP en linea: %d y columna: %d\n",linea, columna);contar();}
"<colgroup "{Atributo}*">"			{printf("Encontro tag COLGROUP en linea: %d y columna: %d\n",linea, columna);contar();}
"</colgroup>"					{printf("Encontro tag COLGROUP en linea: %d y columna: %d\n",linea, columna);contar();}
"<dd>"						{printf("Encontro tag DD en linea: %d y columna: %d\n",linea, columna);contar();}
"<dd "{Atributo}*">"				{printf("Encontro tag DD en linea: %d y columna: %d\n",linea, columna);contar();}
"</dd>"						{printf("Encontro tag DD en linea: %d y columna: %d\n",linea, columna);contar();}
"<del>"						{printf("Encontro tag DEL en linea: %d y columna: %d\n",linea, columna);contar();}
"<del "{Atributo}*">"				{printf("Encontro tag DEL en linea: %d y columna: %d\n",linea, columna);contar();}
"</del>"					{printf("Encontro tag DEL en linea: %d y columna: %d\n",linea, columna);contar();}
"<dir>"						{printf("Encontro tag DIR en linea: %d y columna: %d\n",linea, columna);contar();}
"<dir "{Atributo}*">"				{printf("Encontro tag DIR en linea: %d y columna: %d\n",linea, columna);contar();}
"</dir>"					{printf("Encontro tag DIR en linea: %d y columna: %d\n",linea, columna);contar();}
"<div>"						{printf("Encontro tag DIV en linea: %d y columna: %d\n",linea, columna);contar();}
"<div "{Atributo}*">"				{printf("Encontro tag DIV en linea: %d y columna: %d\n",linea, columna);contar();}
"</div>"					{printf("Encontro tag DIV en linea: %d y columna: %d\n",linea, columna);contar();}
"<dfn>"						{printf("Encontro tag DFN en linea: %d y columna: %d\n",linea, columna);contar();}
"<dfn "{Atributo}*">"				{printf("Encontro tag DFN en linea: %d y columna: %d\n",linea, columna);contar();}
"</dfn>"					{printf("Encontro tag DFN en linea: %d y columna: %d\n",linea, columna);contar();}
"<dl>"						{printf("Encontro tag DL en linea: %d y columna: %d\n",linea, columna);contar();}
"<dl "{Atributo}*">"				{printf("Encontro tag DL en linea: %d y columna: %d\n",linea, columna);contar();}
"</dl>"						{printf("Encontro tag DL en linea: %d y columna: %d\n",linea, columna);contar();}
"<dt>"						{printf("Encontro tag DT en linea: %d y columna: %d\n",linea, columna);contar();}
"<dt "{Atributo}*">"				{printf("Encontro tag DT en linea: %d y columna: %d\n",linea, columna);contar();}
"</dt>"						{printf("Encontro tag DT en linea: %d y columna: %d\n",linea, columna);contar();}
"<em>"						{printf("Encontro tag EM en linea: %d y columna: %d\n",linea, columna);contar();}
"<em "{Atributo}*">"				{printf("Encontro tag EM en linea: %d y columna: %d\n",linea, columna);contar();}
"</em>"						{printf("Encontro tag EM en linea: %d y columna: %d\n",linea, columna);contar();}
"<fieldset>"					{printf("Encontro tag FIELDSET en linea: %d y columna: %d\n",linea, columna);contar();}
"<fieldset "{Atributo}*">"			{printf("Encontro tag FIELDSET en linea: %d y columna: %d\n",linea, columna);contar();}
"</fieldset>"					{printf("Encontro tag FIELDSET en linea: %d y columna: %d\n",linea, columna);contar();}
"<font>"					{printf("Encontro tag FONT en linea: %d y columna: %d\n",linea, columna);contar();}
"<font "{Atributo}*">"				{printf("Encontro tag FONT en linea: %d y columna: %d\n",linea, columna);contar();}
"</font>"					{printf("Encontro tag FONT en linea: %d y columna: %d\n",linea, columna);contar();}
"<form>"					{printf("Encontro tag FORM en linea: %d y columna: %d\n",linea, columna);contar();}
"<form "{Atributo}*">"				{printf("Encontro tag FORM en linea: %d y columna: %d\n",linea, columna);contar();}
"</form>"					{printf("Encontro tag FORM en linea: %d y columna: %d\n",linea, columna);contar();}
"<frame>"					{printf("Encontro tag FRAME en linea: %d y columna: %d\n",linea, columna);contar();}
"<frame "{Atributo}*">"				{printf("Encontro tag FRAME en linea: %d y columna: %d\n",linea, columna);contar();}
"</frame>"					{printf("Encontro tag FRAME en linea: %d y columna: %d\n",linea, columna);contar();}
"<frameset>"					{printf("Encontro tag FRAMESET en linea: %d y columna: %d\n",linea, columna);contar();}
"<frameset "{Atributo}*">"			{printf("Encontro tag FRAMESET en linea: %d y columna: %d\n",linea, columna);contar();}
"</frameset>"					{printf("Encontro tag FRAMESET en linea: %d y columna: %d\n",linea, columna);contar();}
"<h1>"						{printf("Encontro tag H1 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h1 "{Atributo}*">"				{printf("Encontro tag H1 en linea: %d y columna: %d\n",linea, columna);contar();}
"</h1>"						{printf("Encontro tag H1 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h2>"						{printf("Encontro tag H2 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h2 "{Atributo}*">"				{printf("Encontro tag H2 en linea: %d y columna: %d\n",linea, columna);contar();}
"</h2>"						{printf("Encontro tag H2 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h3>"						{printf("Encontro tag H3 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h3 "{Atributo}*">"				{printf("Encontro tag H3 en linea: %d y columna: %d\n",linea, columna);contar();}
"</h3>"						{printf("Encontro tag H3 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h4>"						{printf("Encontro tag H4 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h4 "{Atributo}*">"				{printf("Encontro tag H4 en linea: %d y columna: %d\n",linea, columna);contar();}
"</h4>"						{printf("Encontro tag H4 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h5>"						{printf("Encontro tag H5 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h5 "{Atributo}*">"				{printf("Encontro tag H5 en linea: %d y columna: %d\n",linea, columna);contar();}
"</h5>"						{printf("Encontro tag H5 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h6>"						{printf("Encontro tag H6 en linea: %d y columna: %d\n",linea, columna);contar();}
"<h6 "{Atributo}*">"				{printf("Encontro tag H6 en linea: %d y columna: %d\n",linea, columna);contar();}
"</h6>"						{printf("Encontro tag H6 en linea: %d y columna: %d\n",linea, columna);contar();}
"<head>"					{printf("Encontro tag HEAD en linea: %d y columna: %d\n",linea, columna);contar();}
"<head "{Atributo}*">"				{printf("Encontro tag HEAD en linea: %d y columna: %d\n",linea, columna);contar();}
"</head>"					{printf("Encontro tag HEAD en linea: %d y columna: %d\n",linea, columna);contar();}
"<hr>"						{printf("Encontro tag HR en linea: %d y columna: %d\n",linea, columna);contar();}
"<hr "{Atributo}*">"				{printf("Encontro tag HR en linea: %d y columna: %d\n",linea, columna);contar();}
"</hr>"						{printf("Encontro tag HR en linea: %d y columna: %d\n",linea, columna);contar();}
"<html>"					{printf("Encontro tag HTML en linea: %d y columna: %d\n",linea, columna);contar();}
"<html "{Atributo}*">"				{printf("Encontro tag HTML en linea: %d y columna: %d\n",linea, columna);contar();}
"</html>"					{printf("Encontro tag HTML en linea: %d y columna: %d\n",linea, columna);contar();}
"<i>"						{printf("Encontro tag I en linea: %d y columna: %d\n",linea, columna);contar();}
"<i "{Atributo}*">"				{printf("Encontro tag I en linea: %d y columna: %d\n",linea, columna);contar();}
"</i>"						{printf("Encontro tag I en linea: %d y columna: %d\n",linea, columna);contar();}
"<iframe>"					{printf("Encontro tag IFRAME en linea: %d y columna: %d\n",linea, columna);contar();}
"<iframe "{Atributo}*">"			{printf("Encontro tag IFRAME en linea: %d y columna: %d\n",linea, columna);contar();}
"</iframe>"					{printf("Encontro tag IFRAME en linea: %d y columna: %d\n",linea, columna);contar();}
"<img>"						{printf("Encontro tag IMG en linea: %d y columna: %d\n",linea, columna);contar();}
"<img "{Atributo}*">"				{printf("Encontro tag IMG en linea: %d y columna: %d\n",linea, columna);contar();}
"</img>"					{printf("Encontro tag IMG en linea: %d y columna: %d\n",linea, columna);contar();}
"<input>"					{printf("Encontro tag INPUT en linea: %d y columna: %d\n",linea, columna);contar();}
"<input "{Atributo}*">"				{printf("Encontro tag INPUT en linea: %d y columna: %d\n",linea, columna);contar();}
"</input>"					{printf("Encontro tag INPUT en linea: %d y columna: %d\n",linea, columna);contar();}
"<ins>"						{printf("Encontro tag INS en linea: %d y columna: %d\n",linea, columna);contar();}
"<ins "{Atributo}*">"				{printf("Encontro tag INS en linea: %d y columna: %d\n",linea, columna);contar();}
"</ins>"					{printf("Encontro tag INS en linea: %d y columna: %d\n",linea, columna);contar();}
"<isindex>"					{printf("Encontro tag ISINDEX en linea: %d y columna: %d\n",linea, columna);contar();}
"<isindex "{Atributo}*">"			{printf("Encontro tag ISINDEX en linea: %d y columna: %d\n",linea, columna);contar();}
"</isindex>"					{printf("Encontro tag ISINDEX en linea: %d y columna: %d\n",linea, columna);contar();}
"<kbd>"						{printf("Encontro tag KBD en linea: %d y columna: %d\n",linea, columna);contar();}
"<kbd "{Atributo}*">"				{printf("Encontro tag KBD en linea: %d y columna: %d\n",linea, columna);contar();}
"</kbd>"					{printf("Encontro tag KBD en linea: %d y columna: %d\n",linea, columna);contar();}
"<label>"					{printf("Encontro tag LABEL en linea: %d y columna: %d\n",linea, columna);contar();}
"<label "{Atributo}*">"				{printf("Encontro tag LABEL en linea: %d y columna: %d\n",linea, columna);contar();}
"</label>"					{printf("Encontro tag LABEL en linea: %d y columna: %d\n",linea, columna);contar();}
"<legend>"					{printf("Encontro tag LEGEND en linea: %d y columna: %d\n",linea, columna);contar();}
"<legend "{Atributo}*">"			{printf("Encontro tag LEGEND en linea: %d y columna: %d\n",linea, columna);contar();}
"</legend>"					{printf("Encontro tag LEGEND en linea: %d y columna: %d\n",linea, columna);contar();}
"<li>"						{printf("Encontro tag LI en linea: %d y columna: %d\n",linea, columna);contar();}
"<li "{Atributo}*">"				{printf("Encontro tag LI en linea: %d y columna: %d\n",linea, columna);contar();}
"</li>"						{printf("Encontro tag LI en linea: %d y columna: %d\n",linea, columna);contar();}
"<link>"					{printf("Encontro tag LINK en linea: %d y columna: %d\n",linea, columna);contar();}
"<link "{Atributo}*">"				{printf("Encontro tag LINK en linea: %d y columna: %d\n",linea, columna);contar();}
"</link>"					{printf("Encontro tag LINK en linea: %d y columna: %d\n",linea, columna);contar();}
"<map>"						{printf("Encontro tag MAP en linea: %d y columna: %d\n",linea, columna);contar();}
"<map "{Atributo}*">"				{printf("Encontro tag MAP en linea: %d y columna: %d\n",linea, columna);contar();}
"</map>"					{printf("Encontro tag MAP en linea: %d y columna: %d\n",linea, columna);contar();}
"<menu>"					{printf("Encontro tag MENU en linea: %d y columna: %d\n",linea, columna);contar();}
"<menu "{Atributo}*">"				{printf("Encontro tag MENU en linea: %d y columna: %d\n",linea, columna);contar();}
"</menu>"					{printf("Encontro tag MENU en linea: %d y columna: %d\n",linea, columna);contar();}
"<meta>"					{printf("Encontro tag META en linea: %d y columna: %d\n",linea, columna);contar();}
"<meta "{Atributo}*">"				{printf("Encontro tag META en linea: %d y columna: %d\n",linea, columna);contar();}
"</meta>"					{printf("Encontro tag META en linea: %d y columna: %d\n",linea, columna);contar();}
"<noframes>"					{printf("Encontro tag NOFRAMES en linea: %d y columna: %d\n",linea, columna);contar();}
"<noframes "{Atributo}*">"			{printf("Encontro tag NOFRAMES en linea: %d y columna: %d\n",linea, columna);contar();}
"</noframes>"					{printf("Encontro tag NOFRAMES en linea: %d y columna: %d\n",linea, columna);contar();}
"<noscript>"					{printf("Encontro tag NOSCRIPT en linea: %d y columna: %d\n",linea, columna);contar();}
"<noscript "{Atributo}*">"			{printf("Encontro tag NOSCRIPT en linea: %d y columna: %d\n",linea, columna);contar();}
"</noscript>"					{printf("Encontro tag NOSCRIPT en linea: %d y columna: %d\n",linea, columna);contar();}
"<object>"					{printf("Encontro tag OBJECT en linea: %d y columna: %d\n",linea, columna);contar();}
"<object "{Atributo}*">"			{printf("Encontro tag OBJECT en linea: %d y columna: %d\n",linea, columna);contar();}
"</object>"					{printf("Encontro tag OBJECT en linea: %d y columna: %d\n",linea, columna);contar();}
"<ol>"						{printf("Encontro tag OL en linea: %d y columna: %d\n",linea, columna);contar();}
"<ol "{Atributo}*">"				{printf("Encontro tag OL en linea: %d y columna: %d\n",linea, columna);contar();}
"</ol>"						{printf("Encontro tag OL en linea: %d y columna: %d\n",linea, columna);contar();}
"<optgroup>"					{printf("Encontro tag OPTGROUP en linea: %d y columna: %d\n",linea, columna);contar();}
"<optgroup "{Atributo}*">"			{printf("Encontro tag OPTGROUP en linea: %d y columna: %d\n",linea, columna);contar();}
"</optgroup>"					{printf("Encontro tag OPTGROUP en linea: %d y columna: %d\n",linea, columna);contar();}
"<option>"					{printf("Encontro tag OPTION en linea: %d y columna: %d\n",linea, columna);contar();}
"<option "{Atributo}*">"			{printf("Encontro tag OPTION en linea: %d y columna: %d\n",linea, columna);contar();}
"</option>"					{printf("Encontro tag OPTION en linea: %d y columna: %d\n",linea, columna);contar();}
"<p>"						{printf("Encontro tag P en linea: %d y columna: %d\n",linea, columna);contar();}
"<p "{Atributo}*">"				{printf("Encontro tag P en linea: %d y columna: %d\n",linea, columna);contar();}
"</p>"						{printf("Encontro tag P en linea: %d y columna: %d\n",linea, columna);contar();}
"<param>"					{printf("Encontro tag PARAM en linea: %d y columna: %d\n",linea, columna);contar();}
"<param "{Atributo}*">"				{printf("Encontro tag PARAM en linea: %d y columna: %d\n",linea, columna);contar();}
"</param>"					{printf("Encontro tag PARAM en linea: %d y columna: %d\n",linea, columna);contar();}
"<pre>"						{printf("Encontro tag PRE en linea: %d y columna: %d\n",linea, columna);contar();}
"<pre "{Atributo}*">"				{printf("Encontro tag PRE en linea: %d y columna: %d\n",linea, columna);contar();}
"</pre>"					{printf("Encontro tag PRE en linea: %d y columna: %d\n",linea, columna);contar();}
"<q>"						{printf("Encontro tag Q en linea: %d y columna: %d\n",linea, columna);contar();}
"<q "{Atributo}*">"				{printf("Encontro tag Q en linea: %d y columna: %d\n",linea, columna);contar();}
"</q>"						{printf("Encontro tag Q en linea: %d y columna: %d\n",linea, columna);contar();}
"<s>"						{printf("Encontro tag S en linea: %d y columna: %d\n",linea, columna);contar();}
"<s "{Atributo}*">"				{printf("Encontro tag S en linea: %d y columna: %d\n",linea, columna);contar();}
"</s>"						{printf("Encontro tag S en linea: %d y columna: %d\n",linea, columna);contar();}
"<samp>"					{printf("Encontro tag SAMP en linea: %d y columna: %d\n",linea, columna);contar();}
"<samp "{Atributo}*">"				{printf("Encontro tag SAMP en linea: %d y columna: %d\n",linea, columna);contar();}
"</samp>"					{printf("Encontro tag SAMP en linea: %d y columna: %d\n",linea, columna);contar();}
"<script>"					{printf("Encontro tag SCRIPT en linea: %d y columna: %d\n",linea, columna);contar();}
"<script "{Atributo}*">"			{printf("Encontro tag SCRIPT en linea: %d y columna: %d\n",linea, columna);contar();}
"</script>"					{printf("Encontro tag SCRIPT en linea: %d y columna: %d\n",linea, columna);contar();}
"<select>"					{printf("Encontro tag SELECT en linea: %d y columna: %d\n",linea, columna);contar();}
"<select "{Atributo}*">"			{printf("Encontro tag SELECT en linea: %d y columna: %d\n",linea, columna);contar();}
"</select>"					{printf("Encontro tag SELECT en linea: %d y columna: %d\n",linea, columna);contar();}
"<small>"					{printf("Encontro tag SMALL en linea: %d y columna: %d\n",linea, columna);contar();}
"<small "{Atributo}*">"				{printf("Encontro tag SMALL en linea: %d y columna: %d\n",linea, columna);contar();}
"</small>"					{printf("Encontro tag SMALL en linea: %d y columna: %d\n",linea, columna);contar();}
"<span>"					{printf("Encontro tag SPAN en linea: %d y columna: %d\n",linea, columna);contar();}
"<span "{Atributo}*">"				{printf("Encontro tag SPAN en linea: %d y columna: %d\n",linea, columna);contar();}
"</span>"					{printf("Encontro tag SPAN en linea: %d y columna: %d\n",linea, columna);contar();}
"<strike>"					{printf("Encontro tag STRIKE en linea: %d y columna: %d\n",linea, columna);contar();}
"<strike "{Atributo}*">"			{printf("Encontro tag STRIKE en linea: %d y columna: %d\n",linea, columna);contar();}
"</strike>"					{printf("Encontro tag STRIKE en linea: %d y columna: %d\n",linea, columna);contar();}
"<strong>"					{printf("Encontro tag STRONG en linea: %d y columna: %d\n",linea, columna);contar();}
"<strong "{Atributo}*">"			{printf("Encontro tag STRONG en linea: %d y columna: %d\n",linea, columna);contar();}
"</strong>"					{printf("Encontro tag STRONG en linea: %d y columna: %d\n",linea, columna);contar();}
"<style>"					{printf("Encontro tag STYLE en linea: %d y columna: %d\n",linea, columna);contar();}
"<style "{Atributo}*">"				{printf("Encontro tag STYLE en linea: %d y columna: %d\n",linea, columna);contar();}
"</style>"					{printf("Encontro tag STYLE en linea: %d y columna: %d\n",linea, columna);contar();}
"<sub>"						{printf("Encontro tag SUB en linea: %d y columna: %d\n",linea, columna);contar();}
"<sub "{Atributo}*">"				{printf("Encontro tag SUB en linea: %d y columna: %d\n",linea, columna);contar();}
"</sub>"					{printf("Encontro tag SUB en linea: %d y columna: %d\n",linea, columna);contar();}
"<sup>"						{printf("Encontro tag SUP en linea: %d y columna: %d\n",linea, columna);contar();}
"<sup "{Atributo}*">"				{printf("Encontro tag SUP en linea: %d y columna: %d\n",linea, columna);contar();}
"</sup>"					{printf("Encontro tag SUP en linea: %d y columna: %d\n",linea, columna);contar();}
"<table>"					{printf("Encontro tag TABLE en linea: %d y columna: %d\n",linea, columna);contar();}
"<table "{Atributo}*">"				{printf("Encontro tag TABLE en linea: %d y columna: %d\n",linea, columna);contar();}
"</table>"					{printf("Encontro tag TABLE en linea: %d y columna: %d\n",linea, columna);contar();}
"<tbody>"					{printf("Encontro tag TBODY en linea: %d y columna: %d\n",linea, columna);contar();}
"<tbody "{Atributo}*">"				{printf("Encontro tag TBODY en linea: %d y columna: %d\n",linea, columna);contar();}
"</tbody>"					{printf("Encontro tag TBODY en linea: %d y columna: %d\n",linea, columna);contar();}
"<td>"						{printf("Encontro tag TD en linea: %d y columna: %d\n",linea, columna);contar();}
"<td "{Atributo}*">"				{printf("Encontro tag TD en linea: %d y columna: %d\n",linea, columna);contar();}
"</td>"						{printf("Encontro tag TD en linea: %d y columna: %d\n",linea, columna);contar();}
"<textarea>"					{printf("Encontro tag TEXTAREA en linea: %d y columna: %d\n",linea, columna);contar();}
"<textarea "{Atributo}*">"			{printf("Encontro tag TEXTAREA en linea: %d y columna: %d\n",linea, columna);contar();}
"</textarea>"					{printf("Encontro tag TEXTAREA en linea: %d y columna: %d\n",linea, columna);contar();}
"<tfoot>"					{printf("Encontro tag TFOOT en linea: %d y columna: %d\n",linea, columna);contar();}
"<tfoot "{Atributo}*">"				{printf("Encontro tag TFOOT en linea: %d y columna: %d\n",linea, columna);contar();}
"</tfoot>"					{printf("Encontro tag TFOOT en linea: %d y columna: %d\n",linea, columna);contar();}
"<th>"						{printf("Encontro tag TH en linea: %d y columna: %d\n",linea, columna);contar();}
"<th "{Atributo}*">"				{printf("Encontro tag TH en linea: %d y columna: %d\n",linea, columna);contar();}
"</th>"						{printf("Encontro tag TH en linea: %d y columna: %d\n",linea, columna);contar();}
"<thead>"					{printf("Encontro tag THEAD en linea: %d y columna: %d\n",linea, columna);contar();}
"<thead "{Atributo}*">"				{printf("Encontro tag THEAD en linea: %d y columna: %d\n",linea, columna);contar();}
"</thead>"					{printf("Encontro tag THEAD en linea: %d y columna: %d\n",linea, columna);contar();}
"<title>"					{printf("Encontro tag TITLE en linea: %d y columna: %d\n",linea, columna);contar();}
"<title "{Atributo}*">"				{printf("Encontro tag TITLE en linea: %d y columna: %d\n",linea, columna);contar();}
"</title>"					{printf("Encontro tag TITLE en linea: %d y columna: %d\n",linea, columna);contar();}
"<tr>"						{printf("Encontro tag TR en linea: %d y columna: %d\n",linea, columna);contar();}
"<tr "{Atributo}*">"				{printf("Encontro tag TR en linea: %d y columna: %d\n",linea, columna);contar();}
"</tr>"						{printf("Encontro tag TR en linea: %d y columna: %d\n",linea, columna);contar();}
"<tt>"						{printf("Encontro tag TT en linea: %d y columna: %d\n",linea, columna);contar();}
"<tt "{Atributo}*">"				{printf("Encontro tag TT en linea: %d y columna: %d\n",linea, columna);contar();}
"</tt>"						{printf("Encontro tag TT en linea: %d y columna: %d\n",linea, columna);contar();}
"<u>"						{printf("Encontro tag U en linea: %d y columna: %d\n",linea, columna);contar();}
"<u "{Atributo}*">"				{printf("Encontro tag U en linea: %d y columna: %d\n",linea, columna);contar();}
"</u>"						{printf("Encontro tag U en linea: %d y columna: %d\n",linea, columna);contar();}
"<ul>"						{printf("Encontro tag UL en linea: %d y columna: %d\n",linea, columna);contar();}
"<ul "{Atributo}*">"				{printf("Encontro tag UL en linea: %d y columna: %d\n",linea, columna);contar();}
"</ul>"						{printf("Encontro tag UL en linea: %d y columna: %d\n",linea, columna);contar();}
"<var>"						{printf("Encontro tag VAR en linea: %d y columna: %d\n",linea, columna);contar();}
"<var "{Atributo}*">"				{printf("Encontro tag VAR en linea: %d y columna: %d\n",linea, columna);contar();}
"</var>"					{printf("Encontro tag VAR en linea: %d y columna: %d\n",linea, columna);contar();}

{Amp}{Hash}[1-2]?{Digito}{PComa}		{error();}
{Amp}{Hash}[3][0-1]{PComa}			{error();}
"&#127;"					{error();}
"<>"						{error();}
"</>"						{error();}

"<"{Etiqueta}{Atributo}*{Cerradura}		{printf("Encontro tag generico linea %d y columna %d\n", linea, columna);contar();}

{Amp}{Hash}{String}+{PComa}			{contar();}
{Amp}{String}+{PComa}				{contar();}

{String}+					{printf("Encontro string: %s  linea %d y columna %d\n", yytext,linea, columna);contar();}

%%

/*{Apertura}{Etiqueta}{Atributo}*{Cerradura}		{contar();printf("e 3\n");}*/
/*{AperturaC}{Etiqueta}{Ceradura}	 		{contar();printf("e 4\n");}*/
/*ERRORES LEXICOS*/

int main(){
	yylex();
}


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
