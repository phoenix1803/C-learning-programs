#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') length++;
    return length;
}

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    printf("Length of the string: %d\n", stringLength(str));
    return 0;
}
