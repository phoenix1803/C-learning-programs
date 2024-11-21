#include <stdio.h>
#include <string.h>

void sortStrings(char arr[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    char strings[n][50];
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) gets(strings[i]);

    sortStrings(strings, n);

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) printf("%s\n", strings[i]);

    return 0;
}
