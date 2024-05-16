// helper.c
#include "helper.h"

// Crear una nueva cola
Cola* crearCola() {
    Cola* cola = (Cola*)malloc(sizeof(Cola));
    cola->frente = cola->fondo = NULL;
    return cola;
}

// Encolar un elemento
void encolar(Cola* cola, int valor) {
    Nodo* aux = (Nodo*)malloc(sizeof(Nodo));
    aux->numero = valor;
    aux->siguiente = NULL;
    if (cola->fondo == NULL) {
        cola->frente = cola->fondo = aux;
        return;
    }
    cola->fondo->siguiente = aux;
    cola->fondo = aux;
}

// Desencolar un elemento
int desencolar(Cola* cola) {
    if (cola->frente == NULL) {
        return -1; // Cola vacía
    }
    Nodo* aux = cola->frente;
    int valor = aux->numero;
    cola->frente = cola->frente->siguiente;

    free(aux);
    return valor;
}

// Imprimir la cola
void imprimirCola(Cola* cola) {
    Nodo* aux = cola->frente;
    while (aux != NULL) {
        printf("%d -> ", aux->numero);
        aux = aux->siguiente;
    }
    if(aux==NULL && cola->frente!=NULL){
        printf("NULL\n");
    }
    if(cola->frente==NULL){
        printf("LISTA VACIA");
    }
}

// Liberar la memoria de la cola
void liberarCola(Cola* cola) {
    while (cola->frente != NULL) {
        Nodo* aux = cola->frente;
        cola->frente = cola->frente->siguiente;
        free(aux);
    }
    free(cola);
}
