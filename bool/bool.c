#include<stdio.h>

int main() {
    int a = 1;
    int b = 5;

    if (a >= b) {
        printf("This should not print\n");
    } else {
        printf("This will print because a >= b is not 'true'\n");
    }

    // Negative values are "true" too
   
    int c = -3;

    if (c) {
        printf("This printed because c was non-zero\n");
    }

    c = 0;

    if (!c) {
        printf("This printed because c was zero and so !c is true\n");
    }

    printf("The value of expression a >= b is: %d\n", a>=b);
    printf("The value of expression a < b is: %d\n", a<b);

    if (a && c) {
        printf("This won't print because c is 0 and so a && c is false\n");
    }

    if (a || c) {
        printf("This will print because a is non-zero so a || c is true\n");
    }
}
