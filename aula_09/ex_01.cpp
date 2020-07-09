/* Criar um programa que altera o valor pré definido pelo 
programa através da locação de memoria */

#include <stdio.h>

int main() {
    int val_1, val_2; // Valores para serem alterados
    int *pointer = NULL; // Pointeiro limpo

    val_1 = 77;
    pointer = &val_1; // Aponta para val_1
    printf("O valor de val_1 é: %d\n", *pointer);

    (*pointer)++; // Pega o valor da memória apontada por pointer
    printf("O valor de val_1 incrementado pelo pointer: %d\n\n", val_1);


    return 0;
}