#include <stdio.h>
#include <conio.h>

int main() {
    while(!kbhit()) {
        printf("pew pew ");
    }
}