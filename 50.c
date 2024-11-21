#include <stdio.h>
int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Value of x: %d\n", x);
    printf("Value of x through pointer to pointer: %d\n", **pp);

    return 0;
}
