#include <stdio.h>
#include <string.h>

int main() {
    char qtd_nomes = 3;
    char length = 20;
    char nomes[qtd_nomes][length];

    for (char i = 0; i < qtd_nomes; i++) {
        printf("Digite um nome: ");
        // o comando %[^\n]%*c faz com que a captura apenas pare em uma new line
        scanf("%[^\n]%*c", nomes[i]);
    }

    for (char i = 0; i < qtd_nomes; i++) {
        length = strlen(nomes[i]);
        short int letter_counter_a = 0;
        short int letter_counter_e = 0;

        for (short int j = 0; j < length; j++) {
            if (nomes[i][j] == 'a') {
                letter_counter_a++;
            } else if (nomes[i][j] == 'e') {
                letter_counter_e++;
            }
        }
        printf("O nome %s tem %d letras 'a' e %d letras 'e'\n", nomes[i], letter_counter_a, letter_counter_e);
    }
    
    return 0;
}