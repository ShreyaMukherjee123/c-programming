#include <stdio.h>

// Function to check if a matrix is upper triangular
int isUpperTriangular(int a[20][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) { // check below diagonal
            if (a[i][j] != 0)
                return 0; // not upper triangular
        }
    }
    return 1; // upper triangular
}

int main() {
    int n, i, j;

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    int a[20][20]; // fixed-size array for simplicity

    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    if (isUpperTriangular(a, n))
        printf("\nThis is an upper triangular matrix.\n");
    else
        printf("\nThis is NOT an upper triangular matrix.\n");

    return 0;
}
