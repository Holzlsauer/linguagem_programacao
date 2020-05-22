#include <stdio.h>

int main() {
    float a_0, r;
    int n, close;
    do {
        printf("PROGRESSAO ARITIMETICA\n\nPrimero termo: ");
        scanf("%f", &a_0);
        printf("Razao: ");
        scanf("%f", &r);
        printf("Numero de termos: ");
        scanf("%d", &n);

        printf("\nO n-ésimo termo da PA é: %.2f", a_0 + n * r);
        printf("\nSoma dos termos da PA é: %.2f\n\n", (2 * a_0 + n * r) * (n+1) * 0.5);

        printf("1 - voltar ao inicio . 2 - fechar o programa");
        scanf("%d", &close);
    } while (close == 1);
}