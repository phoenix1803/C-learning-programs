#include <stdio.h>
#include <ctype.h>

void countCharacterTypes(char str[], int *upper, int *lower, int *digits, int *special) {
    *upper = *lower = *digits = *special = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) (*upper)++;
        else if (islower(str[i])) (*lower)++;
        else if (isdigit(str[i])) (*digits)++;
        else (*special)++;
    }
}

int main() {
    char str[100];
    int upper, lower, digits, special;
    printf("Enter a string: ");
    gets(str);

    countCharacterTypes(str, &upper, &lower, &digits, &special);
    printf("Uppercase: %d, Lowercase: %d, Digits: %d, Special Characters: %d\n", upper, lower, digits, special);

    return 0;
}
