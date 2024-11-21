#include <stdio.h>

int cube(int n) {
    return n * n * n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Cube of %d is %d\n", num, cube(num));
    return 0;
}
