#include <stdio.h>

int main() {
    int number;
    int aux[4];

    printf("Entre com um valor inteiro entre 0 e 15: ");
    scanf("%d", &number);

    if (16 > number && number > -1)
    {
        printf("Esse valor em binário é: ");
        for (int i = 0; i < 4; i++)
        {
            aux[i] = number % 2;
            number = number / 2;
        }
        for (int i = 3; i > -1; i--)
        {
            printf("%d", aux[i]);
        }
        printf("\n");
        
        
    } else {
        printf("\nValor inválido\n");
    }
    

}
