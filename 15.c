#include <stdio.h>

int main(void) 
{
    int n;
    int positivos = 0, negativos = 0, nulos = 0;

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

    // Proceso: Evaluar cada elemento
    for (int i = 0; i < n; i++) {
        if (arreglo[i] > 0) {
            positivos++;
        } else if (arreglo[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    printf("\n--- Resultados del analisis del arreglo ---\n");
    printf("Elementos positivos: %d\n", positivos);
    printf("Elementos negativos: %d\n", negativos);
    printf("Elementos nulos (ceros): %d\n", nulos);

    return 0;
}
