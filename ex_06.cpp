#include <stdio.h>
#include <math.h>

int main() {
    int nible[4];
    int sum = 0;
    bool flag = true;

    while (flag) {
        flag = false;
        printf("Entre com os valores dos 4 bits (0 ou 1): \n");
        for (int i = 3; i > -1; i--) {
            scanf("%d", &nible[i]);
            if (nible[i] != 1 && nible[i] != 0) {
                printf("\n Valor inválido de bit\n");
                flag = true;
                break;
            }
            sum += nible[i] * pow(2,i);
        }
    }

    printf("\nO número em decimal é: %d", sum);
    
}