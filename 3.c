#include <stdio.h>

#define TASA_CAMBIO 11.96

int main(void) 
{
    double dolares, pesos;

    printf("Ingrese la cantidad en dolares: ");
    if (scanf("%lf", &dolares) != 1) return 1;

    pesos = dolares * TASA_CAMBIO;

    printf("Cantidad equivalente en pesos: $%.2f\n", pesos);

    return 0;
}
