#include <stdio.h>
#include <stdint.h>

unsigned int x = 10;

int main() {
    unsigned int x = 5;
    printf("x = %d\n", x);

    for (int8_t x=0; x<2; x++) {
        printf("x = %d\n", x);
    }

    printf("x = %d\n", x);
    return 0;
}


