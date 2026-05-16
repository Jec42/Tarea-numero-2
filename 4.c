#include <stdio.h>

int main(void) 
{
    double capital, tasa_interes, monto_final;

    printf("Ingrese la cantidad de dinero a invertir: ");
    if (scanf("%lf", &capital) != 1) return 1;

    printf("Ingrese la tasa de interes mensual (en porcentaje, ej. 2 para 2%%): ");
    if (scanf("%lf", &tasa_interes) != 1) return 1;

    monto_final = capital + (capital * (tasa_interes / 100.0));

    printf("Monto de dinero que obtendra al finalizar el mes: $%.2f\n", monto_final);

    return 0;
}
