/* Criar um programa com ponteiro, que atribua duas constantes a duas variáveis
do tipo inteiro e depois seja inserido o endereço das variáveis em dois 
ponteiros, imprimir os ponteiros, atribuir um ponteiro em outro e depois 
imprimir, depois, atribuir um numero a um ponteiro já usado, também uma 
variável a outra e depois imprimir tudo. */

#include <stdio.h>

int main() {
    int val_1, val_2;
    int *ptrVal_1, *ptrVal_2;
    int *outroPtr;

    val_1 = 1; // Atribui duas constantes
    val_2 = 2; // a duas variáveis

    ptrVal_1 = &val_1; // Insere o endereço das variáveis
    ptrVal_2 = &val_2; // em dois ponteiros

    printf("O valor do primeiro ponteiro é: %p\n", ptrVal_1); // Imprime os
    printf("O valor do segundo ponteiro é: %p\n", ptrVal_2); // ponteiros

    outroPtr = ptrVal_1; // Atribui um ponteiro em outro
    printf("O valor do outro ponteiro é: %p\n\n", outroPtr); // e depois imprime

    *ptrVal_2 = 0; // Atribui um numero a um ponteiro já usado
    val_1 = val_2; // E uma variável a outra

    // E imprime tudo
    printf("O valor da primeira variável é: %d\n", val_1);
    printf("O valor da segunda variável é: %d\n", val_2);
    printf("O valor no primeiro ponteiro é: %d\n", *ptrVal_1);
    printf("O valor no segundo ponteiro é: %d\n", *ptrVal_2);
    printf("O valor no outro ponteiro é: %d\n", *outroPtr);
    printf("q.e.d.\n");

    return 0;
}