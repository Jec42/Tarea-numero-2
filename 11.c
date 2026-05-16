#include <stdio.h>

int main(void) 
{
    int suma = 0;

    // Se inicia en 10 y se incrementa de 2 en 2 para asegurar números pares
    for (int i = 10; i <= 50; i += 2) {
        suma += i;
    }

    printf("La suma de los numeros pares comprendidos entre 10 y 50 es: %d\n", suma);

    return 0;
}
