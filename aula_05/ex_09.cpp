#include <stdio.h>

int main() {
    int number;

    do {
        printf("Insira um número (Digite 0 para sair): ");
        scanf("%d", &number);

        switch (number%2 == 0) {
            case 1: printf("PAR\n");
                break;
            default: printf("IMPAR\n");
                break;
        }
    } while (number != 0);
}