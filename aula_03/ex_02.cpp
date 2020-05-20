#include <stdio.h>

int main() {
    float number;

    printf("Entre com um número: ");
    scanf("%f", &number);

    if (number > 0) {
        printf("%f é positivo\n", number);
    } 
    else if (number == 0.0) {
        printf("%f é nulo\n", number);
    }
    else {
        printf("%f é negativo\n", number);
    }
}