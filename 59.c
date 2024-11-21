#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int upper = 0, lower = 0, digits = 0, special = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (isupper(ch)) upper++;
        else if (islower(ch)) lower++;
        else if (isdigit(ch)) digits++;
        else special++;
    }

    printf("Uppercase: %d\nLowercase: %d\nDigits: %d\nSpecial characters: %d\n", upper, lower, digits, special);
    fclose(file);
    return 0;
}
