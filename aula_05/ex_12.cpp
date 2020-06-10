#include <stdio.h>

int main() {
    int total = 0;
    int tmp;

    do {
        printf("Total = %d\nEntre com um número: ", total);
        scanf("%d", &tmp);
        total += tmp;
    } while(total < 20);
    printf("Final total = %d", total);
}