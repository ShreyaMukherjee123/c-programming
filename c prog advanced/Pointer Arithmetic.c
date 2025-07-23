#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    printf("Pointer arithmetic:\n");
    for (int i = 0; i < 4; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    return 0;
}
