#include <stdio.h>
#include <stdint.h>

// Each flag is represented by a different
// bit position.

#define FLAG_1 0x1
#define FLAG_2 0x2
#define FLAG_3 0x4
#define FLAG_4 0x8
#define FLAG_5 0x10

void print_flags(uint32_t flag_set) {
    // Test flag with &
    if (flag_set & FLAG_1) {
        printf("Flag 1 is set\n");
    } else {
        printf("Flag 1 is not set\n");
    }

    printf("Flag 2 is %s\n", ((flag_set & FLAG_2) ? "set" : "not set"));
    printf("Flag 3 is %s\n", ((flag_set & FLAG_3) ? "set" : "not set"));
    printf("Flag 4 is %s\n", ((flag_set & FLAG_4) ? "set" : "not set"));
    printf("Flag 5 is %s\n", ((flag_set & FLAG_5) ? "set" : "not set"));
    printf("\n");
}
    
int main() {

    // Our flag set is initially empty
    uint32_t flag_set = 0x0;
    print_flags(flag_set);
    
    // Set a flag by using bitwise or
    flag_set |= FLAG_1;
    flag_set |= FLAG_3;
    print_flags(flag_set);

    // Reset a flag by using bitwise and with the flag inverted
    flag_set &= ~FLAG_3;
    print_flags(flag_set);

    // Toggle a flag with xor
    flag_set ^= FLAG_5;
    flag_set ^= FLAG_1;
    print_flags(flag_set);

    // Operate on multiple flags at once by or'ing them together.
    flag_set |= (FLAG_2 | FLAG_4);  // Sets flag 2 and 4
    flag_set &= ~(FLAG_1 | FLAG_3);  // Resets flags 1 and 3
    flag_set ^= (FLAG_5 | FLAG_4 | FLAG_1); // Toggles flags 1, 4, and 5
    print_flags(flag_set);
}





    


