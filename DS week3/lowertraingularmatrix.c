#include <stdio.h>

// Function to check if the matrix is lower triangular
int isLowerTriangular(int a[20][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // check elements above main diagonal
            if (a[i][j] != 0)
                return 0; // not lower triangular
        }
    }
    return 1; // lower triangular
}

int main() {
    int n, i, j;

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    int a[20][20]; // fixed-size array

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

    if (isLowerTriangular(a, n))
        printf("\nThis is a lower triangular matrix.\n");
    else
        printf("\nThis is NOT a lower triangular matrix.\n");

    return 0;
}
