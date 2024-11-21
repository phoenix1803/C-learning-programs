#include <stdio.h>
#include <string.h>

// User-defined function to find string length
int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int main() {
    char str1[50], str2[50];
    printf("Enter a string: ");
    gets(str1);

    // Using library function
    printf("Length (library function): %lu\n", strlen(str1));

    // Using user-defined function
    printf("Length (user-defined function): %d\n", stringLength(str1));

    // String copy
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    return 0;
}
