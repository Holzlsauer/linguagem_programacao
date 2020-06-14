#include <stdio.h>

int main() {
    short int size = 10;
    int vect_1[size];
    int vect_2[size];
    int vect_soma[size];

    for (short int i = 0; i < size; i++) {
        printf("Digite um valor inteiro para o vetor 1: ");
        scanf("%d", &vect_1[i]);
        printf("Digite um valor inteiro para o vetor 2: ");
        scanf("%d", &vect_2[i]);

        vect_soma[i] = vect_1[i] + vect_2[i];
    }

    printf("\nO vetor soma é: ");
    for (short int i = 0; i < size; i++)
        printf("%d ", vect_soma[i]);    
    
    return 0;
}