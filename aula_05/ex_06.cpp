#include <stdio.h>
# include <unistd.h>

int main() {
    int reps;

    printf("Imprimir quantas vezes?: ");
    scanf("%d", &reps);

    do {
        printf("FATEC\n");
        sleep(1);
        reps--;
    } while (reps > 0);
}