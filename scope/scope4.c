#include <stdio.h>

unsigned int x = 10;

int main() {
    unsigned int x = 5;

    {
        double x = 6.5;
        printf("x = %f\n", x);
    }

    printf("x = %d\n", x);
    return 0;
}


