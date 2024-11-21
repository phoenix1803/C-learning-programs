#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    printf("Pointer increment:\n");
    for (int i = 0; i < 4; i++) {
        printf("Value: %d\n", *ptr);
        ptr++;
    }

    printf("Pointer decrement:\n");
    for (int i = 3; i >= 0; i--) {
        ptr--;
        printf("Value: %d\n", *ptr);
    }

    return 0;
}
