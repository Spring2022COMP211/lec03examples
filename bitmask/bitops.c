#include<stdio.h>
#include<stdint.h>

int main() {
    uint32_t a = 0x77777777;
    uint32_t b = 0xffffffff;
    int32_t c = 0xffffffff;

    printf("a: %x\n", a);
    printf("~a: %x\n", ~a);
    printf("a & b: %x\n", a&b);
    printf("a | b: %x\n", a|b);
    printf("a ^ b: %x\n", a^b);
    printf("a << 1: %x\n", a << 1);
    printf("a << 3: %x\n", a << 3);
    printf("a >> 2: %x\n", a >> 2);
    printf("b >> 2: %x\n", b >> 2);
    printf("c >> 2: %x\n", c >> 2);
}

