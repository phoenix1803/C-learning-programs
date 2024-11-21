#include <stdio.h>

int* getPointerToValue(int value) {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = value;
    return ptr;
}

int main() {
    int *p = getPointerToValue(42);
    printf("Value from function: %d\n", *p);
    free(p);
    return 0;
}
