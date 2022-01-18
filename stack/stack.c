#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int32_t foo(int32_t x, int32_t y, int32_t z);
int32_t bar(int32_t z, int32_t w);
int32_t square(int32_t x);

int32_t main() {

    int x = foo(3,4,5);
    printf("x = %d\n", x);

    return EXIT_SUCCESS;
}

int32_t foo(int32_t x, int32_t y, int32_t z) {
    return z + bar(x,y);
}

int32_t bar(int32_t z, int32_t w) {
    int32_t x = z+w;
    z = square(z);
    return x+z;
}

int32_t square(int32_t x) {
    return x*x;
}



