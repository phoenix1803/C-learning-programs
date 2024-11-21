#include <stdio.h>

int main() {
    int a = 5, b = 3;

    printf("Logical AND (a && b): %d\n", a && b);
    printf("Logical OR (a || b): %d\n", a || b);
    printf("Logical NOT (!a): %d\n", !a);

    printf("Bitwise AND (a & b): %d\n", a & b);
    printf("Bitwise OR (a | b): %d\n", a | b);
    printf("Bitwise XOR (a ^ b): %d\n", a ^ b);

    return 0;
}
