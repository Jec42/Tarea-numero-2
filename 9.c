#include <stdio.h>

int main(void) 
{
    int n;

    printf("Ingrese un numero entero N para obtener su tabla: ");
    if (scanf("%d", &n) != 1) return 1;

    printf("\n--- Tabla de multiplicar del %d ---\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
