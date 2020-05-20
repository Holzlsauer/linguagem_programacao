#include <stdio.h>
#include <stdlib.h> // system()

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

        if (menu == 1) {
            printf("Soma\ndigite os valores\n\n");
            scanf("%f%f", &input_01, &input_02);
            printf("o valor de x=%f\n\n", input_01 + input_02);

            printf("voltar pro menu?\n\n1-sim/2-nao  ");
            scanf("%d", &option);
        }
        if (menu == 2) {
            printf("Subtracao\ndigite os valores\n\n");
            scanf("%f%f", &input_01, &input_02);
            printf("o valor de x=%f\n\n", input_01 - input_02);

            printf("voltar pro menu?\n\n1-sim/2-nao  ");
            scanf("%d", &option);
        }
        if (menu == 3) {
            printf("Multiplicacao\ndigite os valores\n\n");
            scanf("%f%f", &input_01, &input_02);
            printf("o valor de x=%f\n\n", input_01 * input_02);

            printf("voltar pro menu?\n\n1-sim/2-nao  ");
            scanf("%d", &option);
        }
        if (menu == 4) {
            printf("Divisao\ndigite os valores\n\n");
            scanf("%f%f", &input_01, &input_02);
            printf("o valor de x=%f\n\n", input_01 / input_02);

            printf("voltar pro menu?\n\n1-sim/2-nao  ");
            scanf("%d", &option);
        }
        if (menu == 5) {
            break;
        }
    } while (option != 2);
}