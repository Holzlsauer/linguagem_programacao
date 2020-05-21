#include <stdio.h>
#include <unistd.h>

int main() {
    double number;

    printf("Informe um valor: ");
    scanf("%lf", &number);

    for (int i = 1; i < 11; i++) {
        printf("\n%d x %.2f = %.2f", i, number, i * number);
        sleep(0.5);
    }    
}