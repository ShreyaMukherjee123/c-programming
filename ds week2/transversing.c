#include <stdio.h>

int main() {
    int arr[20], size, i;

    // input array size
    printf("How many elements you want to store (max = 20) -> ");
    scanf("%d", &size);

    // check if size is valid
    if (size > 20 || size <= 0) {
        printf("Invalid size! Please enter a number between 1 and 20.\n");
        return 1;
    }

    // input array elements
    for (i = 0; i < size; i++) {
        printf("Enter number %d -> ", i + 1);
        scanf("%d", &arr[i]);
    }

    // traversing (printing) the array
    printf("\nArray is -> ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
