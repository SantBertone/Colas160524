// DESENCOLAR COMPLETO HASTA QUE QUEDE VACIA.
#include "helper.h"

int main() {
    Cola* cola = crearCola();

    // Encolar varios elementos
    encolar(cola, 10);
    encolar(cola, 20);
    encolar(cola, 30);
    encolar(cola, 40);
    encolar(cola, 50);
    encolar(cola, 60);

    printf("\nCola despues de encolar los elementos:\n");
    imprimirCola(cola);

    // Desencolar y mostrar el valor desencolado uno por uno
    int valorDesencolado;
    while ((valorDesencolado = desencolar(cola)) != -1) {
        printf("\nDesencolado: %d\n", valorDesencolado);
        printf("\nCola despues de desencolar un elemento:\n");
        imprimirCola(cola);
    }

    // Liberar la estructura de la cola
    liberarCola(cola);

    return 0;
}
/* DE A UN ELEMENTO POR VEZ (NECESITA UN IF CADA UNO)
// main.c
#include "helper.h"

int main() {
    Cola* cola = crearCola();

    // Encolar varios elementos
    encolar(cola, 10);
    encolar(cola, 20);
    encolar(cola, 30);
    encolar(cola, 40);
    encolar(cola, 50);
    encolar(cola, 60);

    printf("\nCola despues de encolar los elementos:\n");
    imprimirCola(cola);

    // Desencolar y mostrar el valor desencolado uno por uno
    int valorDesencolado=desencolar(cola);
    if (valorDesencolado != NULL) {
        printf("\nDesencolado: %d\n", valorDesencolado);
        printf("\nCola despues de desencolar un elemento:\n");
        imprimirCola(cola);
    }

    valorDesencolado=desencolar(cola);
    if (valorDesencolado != NULL) {
        printf("\nDesencolado: %d\n", valorDesencolado);
        printf("\nCola despues de desencolar un elemento:\n");
        imprimirCola(cola);
    }
    valorDesencolado=desencolar(cola);
    if (valorDesencolado != NULL) {
        printf("\nDesencolado: %d\n", valorDesencolado);
        printf("\nCola despues de desencolar un elemento:\n");
        imprimirCola(cola);
    }
    valorDesencolado=desencolar(cola);
    if (valorDesencolado != NULL) {
        printf("\nDesencolado: %d\n", valorDesencolado);
        printf("\nCola despues de desencolar un elemento:\n");
        imprimirCola(cola);
    }

    // Liberar la estructura de la cola
    liberarCola(cola);

    return 0;
}
*/