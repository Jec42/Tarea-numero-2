#include <stdio.h>

int main(void) 
{
    int numero;
    int positivos = 0, negativos = 0, nulos = 0;

    printf("Por favor ingrese 100 numeros enteros:\n");

    for (int i = 1; i <= 100; i++) {
        printf("Numero %d/100: ", i);
        if (scanf("%d", &numero) != 1) return 1;

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    printf("\n--- Resultados del conteo ---\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos (Ceros): %d\n", nulos);

    return 0;
}
