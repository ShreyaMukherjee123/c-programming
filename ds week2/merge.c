#include <stdio.h>

int main() {
    int size1, size2;

    // 1st array
    printf("Enter the size of 1st Array -> ");
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        printf("Enter number %d -> ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // 2nd array
    printf("Enter the size of 2nd Array -> ");
    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        printf("Enter number %d -> ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // merge
    int f_size = size1 + size2;
    int f_array[f_size];

    // copy elements of 1st array
    for (int i = 0; i < size1; i++) {
        f_array[i] = arr1[i];
    }

    // copy elements of 2nd array
    for (int i = 0; i < size2; i++) {
        f_array[size1 + i] = arr2[i];
    }

    // print merged array
    printf("\nMerged Array: ");
    for (int i = 0; i < f_size; i++) {
        printf("%d ", f_array[i]);
    }

    return 0;
}
