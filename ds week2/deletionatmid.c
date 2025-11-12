#include <stdio.h>

int main() {
    int size, i, mid;

    printf("\n--------------------------------------------------------");
    printf("\nEnter the size of the Array -> ");
    scanf("%d", &size); // input array size

    int arr[size];

    // input elements
    for (i = 0; i < size; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // printing original array
    printf("\nOriginal array is -> ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n-----------------------------------");

    // deleting middle element
    if (size % 2 == 0) {
        // even size
        mid = size / 2;
    } else {
        // odd size
        mid = (size + 1) / 2;
    }

    // shift elements to delete middle element
    for (i = mid - 1; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    // print modified array
    printf("\nModified array is -> ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n--------------------------------------------------------");

    return 0;
}
