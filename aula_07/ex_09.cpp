#include <stdio.h>

int main() {
    short int size = 8;
    int array[size];
    int soma_30 = 0;
    int soma_total = 0;

    for (short int i = 0; i < size; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &array[i]);

        soma_total += array[i];
        if(array[i] > 30)
            soma_30 += array[i];
    }

    printf("\nA soma total dos valores e %d, e dos maiores que 30 e %d.", soma_total, soma_30);
    printf("\nO vetor eh: ");
    for (short int i = 0; i < size; i++)
        printf("%d ", array[i]);
    
    return 0;
}