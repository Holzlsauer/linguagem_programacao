#include <stdio.h>

int main() {
    int number_01, number_02;

    printf("Informe o primeiro numero:\n");
    scanf("%d", &number_01);
    printf("Informe o segundo numero:\n");
    scanf("%d", &number_02);

    if (number_01 + number_02 > 10) {
        printf("A soma dos numeros informados e %d\n", number_01 + number_02);
    } else {
        printf("Inpossivel exibir o numero somados\n");
    }
    
}