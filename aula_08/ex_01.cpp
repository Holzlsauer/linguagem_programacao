/* EXERCÍCIO 01

Faça um programa que lê três palavras do 
teclado e imprime as três palavras na ordem inversa */

#include <stdio.h>

int main() {
    char words[3][40];
    for(short int i = 0; i < 3; i++) {
        printf("Informe a %d palavra: ", i);
        scanf("%[^\n]%*c", words[i]);
    }
    printf("\n");
    for(short int i = 2; i > -1; i--)
        printf("%s\n", words[i]);

    return 0;
}