/* Criar um programa que defina e exibe 
valores e endereços dos ponteiros na tela. */

#include <stdio.h>

int main() {
    int array[] = {0, 1, 2, 3};
    int *arrayPtr = NULL;

    arrayPtr = array; // Atribuindo o endereço do vetor para o ponteiro
    /* Quando passamos a array para o ponteiro dessa forma, passamos o endereço
    da primeira posição da array */

    for (short int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        printf("Posição %d: %d\n", i, array[i]);
        printf("Ponteiro %p conteúdo: %d\n\n", arrayPtr, *arrayPtr);
        arrayPtr++; // Incrementa o ponteiro, "movendo-o 4 bits para frente"
    }

    return 0;
}