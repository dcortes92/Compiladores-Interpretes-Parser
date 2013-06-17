#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bandera = 0;

/*Nodo de la lista*/
struct nodoLista
{
    char *etiqueta; /*etiqueta del nodo*/
    char *padre; /*padre de la etiqueta, usado para la jerarquía del árbol*/
    int cantidadTabs;
    struct nodoLista *ptrSiguiente;
};

struct nodoListaError
{
    char *etiqueta; /*etiqueta del nodo*/
    int linea;
    int columna;
    struct nodoListaError *ptrSiguiente;
};

struct nodoLista *nodoInicial = NULL; /*Puntero que tiene la referencia al primer nodo*/
struct nodoLista *nodoActual = NULL; /*Puntero que tiene la refenrencia al nodo actual,
										se usa para insertar al final.*/

struct nodoListaError *nodoInicialError = NULL; /*Puntero que tiene la referencia al primer nodo*/
struct nodoListaError *nodoActualError = NULL; /*Puntero que tiene la refenrencia al nodo actual,
										se usa para insertar al final.*/

/*Prototipos de las funciones*/
struct nodoLista* crearLista(char *tag);
struct nodoLista* insertar(char *tag);

struct nodoListaError* crearListaError(char *tag, int linea, int columna);
struct nodoListaError* insertarError(char *tag, int linea, int columna);

void imprimir(void);
void imprimirArbol(void);
void imprimirErrores(void);