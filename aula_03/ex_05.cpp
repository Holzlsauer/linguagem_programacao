#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a, b, c, delta;

    do {
        system("clear");
        printf("Programa Delta negativo\n\ninsira um valor abc\n");
        scanf("%lf %lf %lf", &a, &b, &c);
    
        delta = pow(b,2) - 4 * a * c;

        if (delta < 0) {
            printf("Delta invalido. Tente outro numero");
        } else {
            break;
        }
    } while (true);

    printf("\nRaizes: %.2f, %.2f\n", (-b + pow(delta,.5))*.5, (-b - pow(delta,.5))*.5);

}