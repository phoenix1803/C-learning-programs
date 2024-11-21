#include <stdio.h>
#include <math.h>

float geometricSum(float a, float r, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a * pow(r, i);
    }
    return sum;
}

int main() {
    float a, r;
    int n;

    printf("Enter the first term (a), common ratio (r), and number of terms (n): ");
    scanf("%f %f %d", &a, &r, &n);

    printf("Sum of the geometric series: %.2f\n", geometricSum(a, r, n));
    return 0;
}
