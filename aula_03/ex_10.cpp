#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Usando tempo como seed para random

    int length = 6;
    int contador = 0;
    int temp;
    int array[length];

    while (contador < 6) {
        temp = rand() % 60 + 1;

        bool sorteado = false;
        for (size_t i = 0; i < contador; i++) {
            if (array[i] == temp) {
                sorteado = true;
            }
        }

        if (sorteado == false) {
            array[contador] = temp;
            contador++;
        }
    }

    for (size_t i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}