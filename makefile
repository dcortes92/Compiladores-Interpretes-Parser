analizador:		lex.yy.o y.tab.o
				gcc -o analizador lex.yy.o y.tab.o -ly -ll

lex.yy.c:		analizador.l y.tab.c
				flex analizador.l

y.tab.c:		parser.y
				bison -vdty parser.y
