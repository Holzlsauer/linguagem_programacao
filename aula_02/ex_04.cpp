#include <stdio.h>
#include <math.h>

int main() {
    float number;

    printf("Digite um comprimento em metros: ");
    scanf("%f", &number);

    printf("\nO valor em km é: %f", number * pow(10,3));
    printf("\nO valor em hm é: %f", number * pow(10,2));
    printf("\nO valor em dam é: %f", number * pow(10,1));
    printf("\nO valor em cm é: %f", number * pow(10,-2));
    printf("\nO valor em dm é: %f", number * pow(10,-1));
    printf("\nO valor em mm é: %f\n", number * pow(10,-3));
}
