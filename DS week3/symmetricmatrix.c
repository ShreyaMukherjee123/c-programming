#include <stdio.h>

// Function to check if the matrix is symmetric
int isSymmetric(int a[20][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i])  // check symmetry
                return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, j;

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    int a[20][20]; // Fixed size array (max 20x20)

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

    if (isSymmetric(a, n))
        printf("\nThis is a symmetric matrix.\n");
    else
        printf("\nThis is NOT a symmetric matrix.\n");

    return 0;
}
