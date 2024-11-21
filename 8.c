#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isdigit(ch))
        printf("The character is a number.\n");
    else if (isalpha(ch)) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            printf("The character is a vowel.\n");
        else
            printf("The character is a consonant.\n");
    } else
        printf("The character is neither a number nor an alphabet.\n");

    return 0;
}
