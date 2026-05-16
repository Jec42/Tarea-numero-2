#include <stdio.h>

int main(void) 
{
    double sueldo, nuevo_sueldo;

    printf("Ingrese el sueldo del trabajador: ");
    if (scanf("%lf", &sueldo) != 1) return 1;

    if (sueldo < 1000.0) {
        nuevo_sueldo = sueldo * 1.15; // Aumento del 15%
    } else {
        nuevo_sueldo = sueldo * 1.12; // Aumento del 12%
    }

    printf("El sueldo con el aumento incorporado es: $%.2f\n", nuevo_sueldo);

    return 0;
}
