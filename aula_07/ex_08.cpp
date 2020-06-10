#include <stdio.h>

int main() {
    char size = 10;
    int vect_1[size];
    int vect_2[size];
    int vect_3[size];

    for (char i = 0; i < size; i++) {
        vect_1[i] = (i + 1) * 2;
        vect_2[i] = i + 10;
        vect_3[i] = vect_1[i] + vect_2[i];

        printf("%d ", vect_3[i]);
    }
    
    return 0;
}