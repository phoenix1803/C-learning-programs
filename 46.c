#include <stdio.h>
#include <string.h>

int main() {
    char src[50], dest[50];
    printf("Enter a string: ");
    gets(src);

    strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    return 0;
}
