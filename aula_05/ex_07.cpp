#include <stdio.h>

int main() {
    int counter;
    printf("Insira um número: ");
    scanf("%d", &counter);

    do {
        printf("%d\n ", counter--);
    } while(counter > -1);
}