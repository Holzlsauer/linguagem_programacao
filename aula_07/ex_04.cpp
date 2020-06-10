#include <stdio.h>

int main() {
    char qtd_nomes = 4;
    char length = 20;
    char nomes[qtd_nomes][length];

    for (char i = 0; i < qtd_nomes; i++) {
        printf("Digite um nome: ");
        scanf("%s", nomes[i]);
    }

    for (char i = 0; i < qtd_nomes; i++) {
        printf("%s ", nomes[i]);
    }
    
    return 0;
}