#include <stdio.h>
#include <stdint.h>

int main() {
    printf("Size of char: %ld\n", sizeof(char));
    printf("Size of short: %ld\n", sizeof(short));
    printf("Size of int: %ld\n", sizeof(int));
    printf("Size of long: %ld\n", sizeof(long));

    // Same bit pattern understood as different values
    // depending on whether type is signed or unsigned

    signed char a = 0xff;
    unsigned char b = 0xff;
    printf("Value of a is: %d\n", a);
    printf("Value of b is: %d\n", b);
    
    char c = 0xff;
    if (c > 0) {
        printf("char is unsigned by default\n");
    } else {
        printf("char is signed by default\n");
    }

    // Change type below to unsigned and something
    // unexpected happens
    
    int ia, ib;

    ia = 1;
    ib = 2;

    printf("ia-ib: %d ... ", ia-ib);

    if (ia-ib > 0) {
        printf("ia > ib\n");
    } else if (ia-ib == 0) {
        printf("ia == ib\n");
    } else {
        printf("ia < ib\n");
    }

    // Integer math always produces an integer
    // Division truncates.
    
    ia = 4;
    ib = 3;
    printf("4/3 = %d\n", 4/3);    

    // Assigning wider data type to value of 
    // narrower data type sign extends if 
    // narrower data is signed. Zero pads otherwise.
    
    uint32_t w;
    int32_t x;
    uint16_t y = 0xffff;
    int16_t z = 0xffff;

    w = y;
    printf("Value of w: %u\n", w);
    w = z;
    printf("Value of w: %u\n", w);
    
    x = y;
    printf("Value of x: %d\n", x);
    x = z;
    printf("Value of x: %d\n", x);

    // Assigning narrower data type to value
    // of wider tata type truncates high
    // order bytes.
    
    w = 0x12345678;
    y = w;
    z = w;
    printf("Bit pattern of y: %x\n", y);
    printf("Bit pattern of z: %x\n", z);

}
