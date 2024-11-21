#include <stdio.h>

void printFibonacci(int n, int a, int b) {
    if (n <= 0) return;
    printf("%d ", a);
    printFibonacci(n - 1, b, a + b);
}

int main() {
    int m;
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &m);

    printf("Fibonacci series: ");
    printFibonacci(m, 0, 1);
    printf("\n");

    return 0;
}
