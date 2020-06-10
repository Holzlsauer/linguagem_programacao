#include <stdio.h>

int main() {
    int count = 0;
    int aux = 1;

    do {
        do {
        printf("%3d", ++count * aux);
        } while(count < 4);
        count = 0;
        printf("\n");
    } while (aux++ < 4);
    
}