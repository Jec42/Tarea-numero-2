#include <stdio.h>

int main(void) 
{
    int n, numero_buscar;
    int contador = 0;

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

    printf("\nIngrese el numero entero que desea buscar: ");
    if (scanf("%d", &numero_buscar) != 1) return 1;

    // Proceso: Contar las ocurrencias
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == numero_buscar) {
            contador++;
        }
    }

    printf("El numero %d se encuentra %d veces dentro del arreglo.\n", numero_buscar, contador);

    return 0;
}
