#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Array elements with addresses:\n");
    for (int i = 0; i < n; i++) printf("Element: %d, Address: %p\n", arr[i], (void*)&arr[i]);

    return 0;
}
