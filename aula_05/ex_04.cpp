#include <stdio.h>
#include <unistd.h>

int main() {
    char letter = 'Z';
    while (letter != '@') { // Character precedente ao "A" na tabela ASCII
        printf("%c\n", letter--);
        sleep(0.1);
    }    
}