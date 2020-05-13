#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int A;
    int B;
    int C;
    int delta;
    float raiz_1;
    float raiz_2;

    printf("Fórmula de Bhaskára: Ax^2 + Bx + C = 0\n Entre com os valores de A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    delta = pow(B, 2) - 4*A*C;
    if (delta < 0)
    {
        printf("Delta: %d, raiz não pertence aos reais\n", delta);
    } else {
        raiz_1 = (-B + pow(delta, .5))/2*A;
        raiz_2 = (-B - pow(delta, .5))/2*A;

        printf("Raizes: %.2f e %.2f", raiz_1, raiz_2);
    }   
}