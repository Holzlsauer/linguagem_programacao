#include <stdio.h>

int main() {
    int number;

    printf("Entre com um número: ");
    scanf("%d", &number);

    if (number%2 == 0) {
        printf("%d é par\n", number);
    } else {
        printf("%d é impar\n", number);
    }
}