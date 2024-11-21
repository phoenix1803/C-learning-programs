#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (Call by Value): a = %d, b = %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    swapByReference(&x, &y);
    printf("After swapping (Call by Reference): x = %d, y = %d\n", x, y);

    return 0;
}
