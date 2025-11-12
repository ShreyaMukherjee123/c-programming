#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    int even[100], odd[100];  // arrays to store even & odd numbers
    int ecount = 0, ocount = 0;

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);

            // classify elements as even or odd
            if (arr[i][j] % 2 == 0) {
                even[ecount++] = arr[i][j];
            } else {
                odd[ocount++] = arr[i][j];
            }
        }
    }

    // print even elements
    printf("\nEven elements:\n");
    for (i = 0; i < ecount; i++) {
        printf("%d ", even[i]);
    }

    // print odd elements
    printf("\nOdd elements:\n");
    for (i = 0; i < ocount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");
    return 0;
}
