#include <stdio.h>

int main(void) 
{
    int n;
    unsigned long long producto = 1; // Se usa long long para evitar desbordamiento con números grandes

    printf("Ingrese la cantidad de numeros naturales (N): ");
    if (scanf("%d", &n) != 1) return 1;

    if (n < 1) {
        printf("Por favor ingrese un numero natural mayor o igual a 1.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        producto *= i;
    }

    printf("El producto de los primeros %d numeros naturales es: %llu\n", n, producto);

    return 0;
}
