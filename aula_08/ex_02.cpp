/* EXERCÍCIO 02

Faça um programa que leia os elementos de uma matriz
inteira de 4 x 4 e imprimir os elementos da diagonal principal. */

#include <stdio.h>

int main() {
    short int size = 4;
    int arr[size][size];

    for(short int i = 0; i < size; i++)
        for(short int j = 0; j < size; j++) {
            printf("Informe o valor do elemento da linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }

    printf("Diagonal principal: ");
    for(short int diag = 0; diag < size; diag++)
        printf("%d ", arr[diag][diag]);

    return 0;
}