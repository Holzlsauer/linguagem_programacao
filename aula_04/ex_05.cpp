#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 0, j = 10; i <= 10; i++, j--) {
        printf("%d %d\n", i, j);
        sleep(0.5);
    }
}