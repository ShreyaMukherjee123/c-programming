#include <stdio.h>

int main() {
    int n, i, j;
    long long product = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {   // fixed 'N' → 'n'
            scanf("%d", &arr[i][j]);
        }
    }

    // calculate product of elements above main diagonal
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            product *= arr[i][j];
        }
    }

    printf("Product of elements above main diagonal = %lld\n", product);

    return 0;
}
