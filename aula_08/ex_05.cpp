/* EXERCÍCIO 05

Faça um programa que lê uma duas matrizes de 3x3 
e um determinante para multiplicar esta matriz. */

#include <stdio.h>
#define SIZE 3

int main() {
    double arr_1[SIZE][SIZE];
    double arr_2[SIZE][SIZE];
    double param;

    printf("\nPrimeira matriz:\n");
    for(short int i = 0; i < SIZE; i++) {
        for(short int j = 0; j < SIZE; j++) {
            printf("Informe o valor do elemento da linha %d, coluna %d: ", i+1, j+1);
            scanf("%lf", &arr_1[i][j]);
        }
        printf("\n");
    }

    printf("\nSegunda matriz:\n");
    for(short int i = 0; i < SIZE; i++) {
        for(short int j = 0; j < SIZE; j++) {
            printf("Informe o valor do elemento da linha %d, coluna %d: ", i+1, j+1);
            scanf("%lf", &arr_2[i][j]);
        }
        printf("\n");
    }
    printf("\nEntre com o valor da constante para multiplicar as matrizes: ");
    scanf("%lf", &param);

    printf("\nA primeira matriz multiplicada por %.2f:\n", param);
    for(short int i = 0; i < SIZE; i++) {
        for(short int j = 0; j < SIZE; j++)
            printf("%.2f ", arr_1[i][j] * param);
        printf("\n");
    }

    printf("\nA primeira matriz multiplicada por %.2f:\n", param);
    for(short int i = 0; i < SIZE; i++) {
        for(short int j = 0; j < SIZE; j++)
            printf("%.2f ", arr_2[i][j] * param);
        printf("\n");
    }

    return 0;
}