struct nodoPila
{
	char *etiqueta;
	struct nodoPila *ptrSiguiente;
};

typedef struct nodoPila NODOPILA;
typedef NODOPILA *PTRNODOPILA;

void push(PTRNODOPILA *, char *);
void pop(PTRNODOPILA *);
int estaVacia(PTRNODOPILA);
void imprimirPila(PTRNODOPILA);