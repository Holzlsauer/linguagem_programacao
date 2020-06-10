#include <stdio.h>
#include <string.h>

int main() {
    char length = 40;
    char nome[length];

    printf("Digite um nome: ");
    scanf("%s", nome);
    length = strlen(nome);

    // Primeiro
    printf("%c \n", nome[0]);
    // Último
    printf("%c \n", nome[length - 1]);
    // Quarto
    printf("%c \n", nome[3]);
    // Primeiro ao terceiro
    for (char i = 0; i < 3; i++)
        printf("%c ", nome[i]);
    printf("\n");   
    // Primeiro ao último
    for (char i = 0; i < length; i++)
        printf("%c ", nome[i]);
    printf("\n");

    return 0;
}