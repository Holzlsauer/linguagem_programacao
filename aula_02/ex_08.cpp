#include <stdio.h>

int main() {
    float number;
    printf("Entre com um valor em pés: ");
    scanf("%f", &number);

    printf("\nO valor em polegadas é %f, em jardas é %f, e %f em milhas\n", number*12, number/3, number/5280);
}