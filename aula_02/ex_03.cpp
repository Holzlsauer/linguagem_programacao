#include <stdio.h>

int main() {
    int idade, meses, semanas, dias, horas, minutos, segundos;

    printf("Qual a sua idade? \nIdade: ");
    scanf("%d", &idade);

    meses = idade * 12;
    semanas = meses * 4;
    dias = semanas * 7;
    horas = dias * 24;
    minutos = horas * 60;
    segundos = minutos * 60;

    printf("\nSua idade em meses: %d\n", meses);
    printf("Sua idade em semanas: %d\n", semanas);
    printf("Sua idade em dias: %d\n", dias);
    printf("Sua idade em horas: %d\n", horas);
    printf("Sua idade em minutos: %d\n", minutos);
    printf("Sua idade em segundos: %d\n", segundos);
}
