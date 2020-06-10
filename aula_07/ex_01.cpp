#include <stdio.h>

int main() {
    int vect[10];

    for (char i = 0; i < 10; i++) {
        scanf("%d", &vect[i]);
    }

    for (char i = 0; i < 10; i++) {
        printf("%d ", vect[i]);
    }

    return 0;
}
