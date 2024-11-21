#include <stdio.h>

int main() {
    const char *arr[] = {"Apple", "Banana", "Cherry"};
    for (int i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}
