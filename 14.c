#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter an expression (e.g., 4 + 5): ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch (op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if (num2 != 0) result = num1 / num2; 
            else {
                printf("Division by zero is not allowed.\n");
                return 0;
            }
            break;
        default: 
            printf("Invalid operator.\n");
            return 0;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
