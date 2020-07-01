/* EXERCÍCIO 04

Faça um programa que lê uma duas matrizes de 3x3 elementos 
usando um comando for, exibir os valores originais e depois 
exibir os mesmos com a raiz dos valores digitados. */

#include <stdio.h>
#include <math.h>
#define SIZE 3

int main() {
    int arr[SIZE][SIZE];

    for(short int i = 0; i < SIZE; i++)
        for(short int j = 0; j < SIZE; j++) {
            printf("Informe o valor do elemento da linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
            arr[i][j] = pow(arr[i][j], .5);
        }

    printf("\nA matriz das raizes da matriz original é: \n");
    for(short int i = 0; i < SIZE; i++) {
        for(short int j = 0; j < SIZE; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}