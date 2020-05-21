#include <stdio.h>
#include <stdlib.h> // system()

double calculadora(double input_01, double input_02, int option) {
    double ans;

    if (option == 1) {
        ans = input_01 + input_02;
    }
    if (option == 2) {
        ans = input_01 - input_02;
    }
    if (option == 3) {
        ans = input_01 * input_02;
    }
    if (option == 4) {
        ans = input_01 / input_02;
    }

    return ans;
}

int main() {
    int menu, option;
    float input_01, input_02, output;

    do {
        system("clear");

        printf("Programa Calculador\n\n");
        printf("Escolha a operacao desejada\n\n");
        printf("1-Adicao\n");
        printf("2-Subtracao\n");
        printf("3-Multiplicacao\n");
        printf("4-Divisao\n");
        printf("5-Sair\n\n");
        scanf("%d", &menu);

        printf("Digite os valores\n\n");
        scanf("%f%f", &input_01, &input_02);
        printf("o valor de x=%.2f\n\n", calculadora(input_01, input_02, menu));

        printf("voltar pro menu?\n\n1-sim/2-nao  ");
        scanf("%d", &option);
        
        if (menu == 5) {
            break;
        }
    } while (option != 2);
}