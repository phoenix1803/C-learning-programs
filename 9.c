#include <stdio.h>

int main() {
    int choice;
    printf("1. ASCII value to character\n2. Character to ASCII value\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int ascii;
        printf("Enter ASCII value: ");
        scanf("%d", &ascii);
        printf("Character: %c\n", ascii);
    } else if (choice == 2) {
        char ch;
        printf("Enter a character: ");
        scanf(" %c", &ch);
        printf("ASCII value: %d\n", ch);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
