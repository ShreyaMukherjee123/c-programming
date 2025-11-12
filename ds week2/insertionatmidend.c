#include <stdio.h>

int main() {
    int size;

    // size of the array
    printf("Enter the size of the array -> ");
    scanf("%d", &size);

    int arr[size], i;

    // input array elements
    for (i = 0; i < size; i++) {
        printf("Enter number %d -> ", i + 1);
        scanf("%d", &arr[i]);
    }

    // printing original array
    printf("Array is -> ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // changing first, mid, and end elements
    int start, mid, end, cal_mid;

    // insert element at 1st
    printf("\nEnter a number to insert at 1st: ");
    scanf("%d", &start);

    // insert element at mid
    printf("Enter a number to insert at mid: ");
    scanf("%d", &mid);

    // insert element at end
    printf("Enter a number to insert at end: ");
    scanf("%d", &end);

    if (size >= 3) {
        arr[0] = start;          // first element
        arr[size - 1] = end;     // last element

        // calculating mid position
        if (size % 2 == 0) {
            cal_mid = size / 2;
        } else {
            cal_mid = (size + 1) / 2;
        }

        arr[cal_mid - 1] = mid;  // update mid element
    } else {
        printf("\nYou cannot change start, mid & end elements at the same time because size < 3.\n");
    }

    // updated array
    printf("\nUpdated array is -> ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
