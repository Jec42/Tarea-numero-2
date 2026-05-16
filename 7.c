#include <stdio.h>

#define PRECIO_POR_KM 0.23

int main(void) 
{
    double distancia_ida, distancia_total, precio_base, precio_final;
    int dias_estancia;

    printf("Ingrese la distancia de ida (en km): ");
    if (scanf("%lf", &distancia_ida) != 1) return 1;

    printf("Ingrese los dias de estancia: ");
    if (scanf("%d", &dias_estancia) != 1) return 1;

    distancia_total = distancia_ida * 2.0;
    precio_base = distancia_total * PRECIO_POR_KM;

    if (dias_estancia > 7 && distancia_total > 800.0) {
        precio_final = precio_base * 0.70; // Aplica el 30% de descuento
    } else {
        precio_final = precio_base;
    }

    printf("Distancia total recorrida: %.2f km\n", distancia_total);
    printf("El precio final del ticket es: $%.2f\n", precio_final);

    return 0;
}
