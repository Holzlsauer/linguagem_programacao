#include <stdio.h>

int main() {
    short int qtd = 8;
    int num;
    int vect[qtd];

    for (char i = 0; i < qtd; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vect[i]);
    }

    printf("\nDigite um ultimo numero: ");
    scanf("%d", &num);

    char i = 0;
    bool flag = false;
    for ( ; i < qtd; i++) {
        if (vect[i] == num) {
            flag = true;
            break;
        }
    }

    if (flag == true) {
        printf("\nO numero esta na posicao %d e foi o %d a ser digitado\n", i, i + 1);
    } else {
        printf("\nNumero não existe\n");
    }

    return 0;
}