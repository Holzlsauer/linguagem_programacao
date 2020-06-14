#include <stdio.h>

int main() {
    short int size = 6;
    char alunos[size][40];
    float p1[size];
    float p2[size];

    for (short int i = 0; i < size; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%[^\n]%*c", alunos[i]); // Só para no ENTER
    }

    for (short int i = 0; i < size; i++) {
        printf("\nDigite um valor da P1 do %s: ", alunos[i]);
        scanf("%f", &p1[i]);
        printf("Digite um valor da P2 do %s: ", alunos[i]);
        scanf("%f", &p2[i]);

        printf("A média do aluno foi: %.2f", (p1[i]+p2[i])/2.0);
        if((p1[i]+p2[i])/2.0 >= 5.0) {
            printf("\nO aluno %s foi aprovado.\n", alunos[i]);
        } else {
            printf("\nO aluno %s foi reprovado.\n", alunos[i]);
        }
    }
    return 0;
}