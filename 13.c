#include <stdio.h>

int main(void) 
{
    int n;
    int suma = 0;

    printf("Ingrese el tamano del arreglo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Tamano invalido.\n");
        return 1;
    }

    int arreglo[n];

    printf("Ingrese los %d elementos del arreglo:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento [%d]: ", i);
        if (scanf("%d", &arreglo[i]) != 1) return 1;
    }

    // Proceso: Sumar los elementos
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }

    printf("\nLa suma de todos los elementos del arreglo es: %d\n", suma);

    return 0;
}
