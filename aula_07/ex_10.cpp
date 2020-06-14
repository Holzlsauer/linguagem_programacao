/* Preencher um vetor de 8 elementos inteiros. Mostrar o vetor na horizontal com\t. Calcular
a média do vetor. Mostrar quantos números são múltiplos de 5. Quantos números são maiores
que 10 e menores que 30. Qual o maior número do vetor. */

#include <stdio.h>

int main() {
    short int size = 8;
    int array[size];
    int multiplo_5 = 0;
    int maiores = 0;
    int maior = 0;
    float media = 0;

    for (short int i = 0; i < size; i++) {
        printf("Digite um valor inteiro: ");
        scanf("%d", &array[i]);

        media += array[i];

        if(array[i]%5 == 0)
            multiplo_5++;

        if(array[i] > 10 && array[i] < 30)
            maiores++;

        if(array[i] > maior)
            maior = array[i];
    }

    printf("\nO vetor eh:\n");
    for (short int i = 0; i < size; i++)
        printf("\t%d ", array[i]);

    printf("\n%d sao multiplos de 5, %d estao entre 10 e 30", multiplo_5, maiores);
    printf(", e %d e o maior elemento do vetor e %f e a media dos valores\n", maior, media/8.0);
    
    return 0;
}