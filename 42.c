#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    printf("Number of words: %d\n", countWords(str));
    return 0;
}
