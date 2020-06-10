#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tmp;
    int length = 10;
    int array[length];
    srand(time(0));

    for (int i = 0; i < length; i++) {
        array[i] = rand()%10;
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int j = 1; j < length-1; j++) {
        for (int i = 0; i < length-j; i++) {
            if (array[i] > array[i+1]) {
                tmp = array[i+1];
                array[i+1] = array[i];
                array[i] = tmp;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}