#include <stdio.h>
#include <unistd.h>

int main() {
    int counter = 101;
    while (counter > 0) {
        printf("%d\n", --counter);
        sleep(0.1);
    }    
}
