#include <stdio.h>

#define PI 3.141592653589793

int main(void) 
{
    double radio, area, circunferencia;

    printf("Ingrese el radio del circulo: ");
    if (scanf("%lf", &radio) != 1) return 1;

    area = PI * (radio * radio);
    circunferencia = 2 * PI * radio;

    printf("Area: %.4f\n", area);
    printf("Circunferencia: %.4f\n", circunferencia);

    return 0;
}
