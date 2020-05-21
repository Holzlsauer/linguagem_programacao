#include <stdio.h>
#include <unistd.h> // sleep()

int main(){    
    for (char letra = 'Z'; letra >= 'A'; letra--) {
        printf("%c ", letra);
        sleep(0.5);
    }
}