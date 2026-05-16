#include <stdio.h>

int main(void) 
{
    int num1, num2;

    printf("Ingrese el primer numero entero: ");
    if (scanf("%d", &num1) != 1) return 1;

    printf("Ingrese el segundo numero entero: ");
    if (scanf("%d", &num2) != 1) return 1;

    // Validación para evitar división por cero
    if (num1 == 0 && num2 == 0) {
        printf("Ambos numeros son cero, no se puede determinar la division.\n");
        return 0;
    }

    if (num2 != 0 && num1 % num2 == 0) {
        printf("%d es divisor de %d\n", num2, num1);
    } else if (num1 != 0 && num2 % num1 == 0) {
        printf("%d es divisor de %d\n", num1, num2);
    } else {
        printf("Ninguno de los numeros es divisor del otro.\n");
    }

    return 0;
}
