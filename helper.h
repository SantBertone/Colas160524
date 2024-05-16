// helper.h
#ifndef HELPER_H
#define HELPER_H

#include <stdio.h>
#include <stdlib.h>

// Estructura del nodo de la cola
typedef struct Nodo {
    int numero;
    struct Nodo* siguiente;
} Nodo;

// Estructura de la cola
typedef struct Cola {
    Nodo* frente;
    Nodo* fondo;
} Cola;

// Declaraciones de funciones
Cola* crearCola();
void encolar(Cola* cola, int valor);
int desencolar(Cola* cola);
void imprimirCola(Cola* cola);
void liberarCola(Cola* cola);

#endif // HELPER_H
