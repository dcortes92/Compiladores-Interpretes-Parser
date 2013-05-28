#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Nodo de la lista*/
struct nodoLista
{
    char *etiqueta; /*etiqueta del nodo*/
    char *padre; /*padre de la etiqueta, usado para la jerarquía del árbol*/
    int cantidadTabs;
    struct nodoLista *ptrSiguiente;
};

struct nodoLista *nodoInicial = NULL; /*Puntero que tiene la referencia al primer nodo*/
struct nodoLista *nodoActual = NULL; /*Puntero que tiene la refenrencia al nodo actual,
										se usa para insertar al final.*/

/*Prototipos de las funciones*/
struct nodoLista* crearLista(char *tag);
struct nodoLista* insertar(char *tag);
void imprimir(void);

int cantidadTabsPorTag;