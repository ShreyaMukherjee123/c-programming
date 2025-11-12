#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);  // take input for n

    int a[n][n];  // declare the matrix after knowing n

    printf("Enter elements of the %dx%d matrix:\n", n, n);
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

    // sum of main diagonal
    for (i = 0; i < n; i++) {
        sum += a[i][i];
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
