#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of odd numbers to print: ");
    scanf("%d", &n);

    printf("First %d odd numbers:\n", n);
    for (int i = 1, count = 0; count < n; i += 2, count++) {
        printf("%d ", i);
        sum += i;
    }
    printf("\nSum: %d\n", sum);

    return 0;
}
