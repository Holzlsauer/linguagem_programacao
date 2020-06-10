#include <stdio.h>

int main() {
    char size = 6;
    int vect[size];

    for (char i = 0; i < (sizeof vect/sizeof vect[0]); i++) {
        printf("Digite um valor: ");
        scanf("%d", &vect[i]);
    }

    for (char i = 0; i < (sizeof vect/sizeof vect[0]); i++) {
        printf("%d ", vect[i]);
    }

    return 0;
}