#include <stdio.h>

#define PI 3.141592653589793
#define TASA_CAMBIO 11.96

int main(void) 
{

    double num1, num2;
    double suma, resta, multiplicacion;

    printf("--- PROBLEMA 1: Operaciones con dos numeros ---\n");
    printf("Ingrese el primer numero: ");
    if (scanf("%lf", &num1) != 1) return 1;
    printf("Ingrese el segundo numero: ");
    if (scanf("%lf", &num2) != 1) return 1;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicacion: %.2f\n\n", multiplicacion);
}
