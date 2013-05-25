%{
	#include <stdio.h>	
	#include "y.tab.h"
%}

String				[^<>&]
StringC				[^\"<> ]
Digito				[0-9]
Espacios			[ ]*
Etiqueta			{Espacios}[a-z][a-z0-9]*{Espacios}
Comillas			[\"]
AtributoConValor	{StringC}*(\=){Espacios}{Comillas}{StringC}*{Comillas}
Cerradura			[\>]
Amp					[\&]
Hash				[\#]
PComa				[\;]
					

%%						
[ \n\t]+								{return *yytext;}
"<!DOCTYPE"{String}+">"					{}
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
{AtributoConValor}						{printf("AtributoCV %s\n", yytext); yylval.string = yytext; return yylval.string;}
{String}*								{printf("AtributoSV %s\n", yytext); yylval.string = yytext; return *yytext;}

{Amp}{Hash}[1-2]?{Digito}{PComa}		{error();return ;}
{Amp}{Hash}[3][0-1]{PComa}				{error();return ;}
"&#127;"								{error();return ;}
"<>"									{error();return ;}
"</>"									{error();return ;}

{Amp}{Hash}{String}+{PComa}				{}
{Amp}{String}+{PComa}					{}
