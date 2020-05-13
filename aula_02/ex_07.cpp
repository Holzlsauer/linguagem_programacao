#include <stdio.h>
#include <math.h>

int main() {
    float raios_e_trovoes;

    printf("Digite o valor numerio do raio da circunferencia: ");
    scanf("%f", &raios_e_trovoes);
    printf("\nA circunferencia tem perímetro %f e área %f\n", 2*M_PI*raios_e_trovoes, M_PI*pow(raios_e_trovoes,2));
}
