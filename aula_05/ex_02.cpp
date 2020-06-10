#include <stdio.h>
#include <unistd.h>

int main() {
    int counter = -1;
    while (counter < 100) {
        printf("%d\n", ++counter);
        sleep(0.1);
    }    
}