#include <stdio.h>
#include <unistd.h>

int main() {
    char letter = '@'; // Character precedente ao "A" na tabela ASCII
    while (letter != 'Z') {
        printf("%c\n", ++letter);
        sleep(0.1);
    }    
}