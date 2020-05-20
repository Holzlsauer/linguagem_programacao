#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double number;

    printf("Informe um numero:\n");
    scanf("%lf", &number);

    if (number > 20) {
        printf("A metade desse numero e %.2f", number * .5);
    }
}