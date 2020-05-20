#include <stdio.h>

int main() {
    double A, B, C;

    printf("Informe um numero: ");
    scanf("%lf", &A);

    printf("\nInforme um segundo numero: ");
    scanf("%lf", &B);

    printf("\nInforme um terceiro numero: ");
    scanf("%lf", &C);

    if (A + B > C && B + C > A && C + A > B) {
        printf("\nEstes numeros sao lados de um triangulo\n");
    }
}