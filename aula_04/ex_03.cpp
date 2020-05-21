#include <stdio.h>
#include <unistd.h> // sleep()

int main(){    
    for (char letra = 'A'; letra <= 'Z'; letra++) {
        printf("%c ", letra);
        sleep(0.5);
    }
}