analizador: analizador.l
	flex analizador.l
	gcc -o scanner lex.yy.c -lfl
