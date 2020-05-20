#include <stdio.h>

int main() {
    int number;

    printf("Informe um valor positivo:\n");
    scanf("%d", &number);

    if (number%10 == 0) {
        printf("O numero e divisivel por 10, 5 e 2\n");
    } 
    else if (number%5 == 0) {
        printf("O numero e divisivel por 5\n");
    }
    else if (number%2 == 0) {
        printf("O numero e divisivel por 2\n");
    }
    else {
        printf("O numero nao e divisivel");
    }
}