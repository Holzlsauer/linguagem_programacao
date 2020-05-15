#include <stdio.h>
#include <math.h>

int main() {
    float raio;
    printf("Raio da pizza: ");
    scanf("%f", &raio);

    printf("\nÁrea da meia pizza: %f", M_PI * pow(raio,2) * 0.5);
}