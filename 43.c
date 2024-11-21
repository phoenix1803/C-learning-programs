#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
