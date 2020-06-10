#include <stdio.h>

int main() {
    int number;
    do {
        printf("Insira um valor (Digite 0 para sair): ");
        scanf("%d", &number);
    
        if (number%2 == 0 && number != 0) {
            printf("PAR\n");
        } else {
            if(number != 0)
                printf("IMPAR\n");
        }
    } while (number != 0);
}