/* EXERCÍCIO 03

Faça um programa que lê uma matriz de 3x3 elementos usando 
um comando for, multiplica cada elemento por 5 e imprime o resultado. */

#include <stdio.h>
#define SIZE 3

int main() {
    int arr[SIZE][SIZE];

    for(short int i = 0; i < SIZE; i++)
        for(short int j = 0; j < SIZE; j++) {
            printf("Informe o valor do elemento da linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
            arr[i][j] = arr[i][j] * 5;
        }

    printf("\n A matriz multiplicada por 5 é: \n");
    for(short int i = 0; i < SIZE; i++) {
        for(short int j = 0; j < SIZE; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}