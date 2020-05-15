#include <stdio.h>
#include <math.h>

int main() {
    // Um babolê tem uma certa espessura e esse parâmetro não foi especificado 
    // no exercício. Estarei considerando um bambolê de espessura desprezível, 
    // e em unidade de medida genérica

    float raio;
    printf("Raio desejado para o bambolê: ");
    scanf("%f", &raio);

    printf("\nO bambolê terá %f unid. de perímetro.\n", 2*M_PI*raio);
}