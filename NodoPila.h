struct nodoPila
{
	int etiqueta;
	struct nodoPila *ptrSiguiente;
};

typedef struct nodoPila NODOPILA;
typedef NODOPILA *PTRNODOPILA;

void push(PTRNODOPILA *, int);
int pop(PTRNODOPILA *);
int estaVacia(PTRNODOPILA);
void imprimirPila(PTRNODOPILA);