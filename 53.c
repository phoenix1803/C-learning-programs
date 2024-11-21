#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex add(Complex a, Complex b) {
    Complex result = {a.real + b.real, a.imag + b.imag};
    return result;
}

int main() {
    Complex c1 = {2.3, 4.5}, c2 = {1.6, 3.7};
    Complex sum = add(c1, c2);
    printf("Sum: %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}
