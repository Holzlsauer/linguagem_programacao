#include <stdio.h>
#include <unistd.h> // sleep()

int main(){    
    for(int i = 100; i >= 0; i--) {
        printf(" %d\r", i);
        fflush(stdout); // Some magic happens here, and...
        sleep(0.5);
        // O delay é pequeno demais para ver o números usando carriage return \r
    }
}