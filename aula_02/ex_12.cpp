#include <stdio.h>
#include <math.h>

int main() {
    float raio_ext, raio_int;
    printf("Raio esterno: ");
    scanf("%f", &raio_ext);
    printf("Raio interno: ");
    scanf("%f", &raio_int);


    printf("\n\nÁrea da ferradura: %f", M_PI * (pow(raio_ext,2) - pow(raio_int,2)) );
}