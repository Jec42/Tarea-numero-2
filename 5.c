#include <stdio.h>

int main(void) 
{
    double monto_compra, total_pagar;

    printf("Ingrese el monto de la compra: ");
    if (scanf("%lf", &monto_compra) != 1) return 1;

    if (monto_compra > 2500.0) {
        total_pagar = monto_compra * 0.92; // Aplica el 8% de descuento
    } else {
        total_pagar = monto_compra;
    }

    printf("El total a pagar es: $%.2f\n", total_pagar);

    return 0;
}
