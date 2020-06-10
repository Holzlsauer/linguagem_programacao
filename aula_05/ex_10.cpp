#include <stdio.h>

int main() {
    int counter = 0;
    int aux;

    do {
        aux = 0;

        do {
            printf("* ");
        } while (aux++ != counter);

        printf("\n");
        counter++;
    } while (counter != 8);
}