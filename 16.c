#include <stdio.h>

int main(void) 
{
    int pares[100];
    int numero_actual = 2; // El primer número par natural es el 2

    // Proceso: Almacenar los 100 primeros números pares
    for (int i = 0; i < 100; i++) {
        pares[i] = numero_actual;
        numero_actual += 2;
    }

    // Salida: Imprimir el arreglo completo
    printf("--- Los 100 primeros numeros pares almacenados ---\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", pares[i]);
        // Formato para que salte de línea cada 10 números y se vea ordenado
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }

    return 0;
}
