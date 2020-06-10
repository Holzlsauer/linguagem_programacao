#include <stdio.h>

int main() {
    char size = 10;
    int vect[size];

    for (char i = 1; i < size + 1; i++) {
        vect[i-1] = i*2;
    }

    for (char i = 0; i < (sizeof vect/sizeof vect[0]); i++) {
        printf("%d ", vect[i]);
    }

    return 0;
}