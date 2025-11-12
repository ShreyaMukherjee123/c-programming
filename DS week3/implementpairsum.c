#include <stdio.h>

int main() {
    int arr[100];
    int i, j, found = 0;

    printf("Enter 100 integers:\n");
    for (i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Pairs whose sum is 50:\n");
    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {  // corrected syntax
            if (arr[i] + arr[j] == 50) {
                printf("(%d, %d)\n", arr[i], arr[j]);  // fixed printf
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No such pairs found.\n");  // fixed typo "prinf"
    }

    return 0;
}
