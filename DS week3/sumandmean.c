#include <stdio.h>
int main() {
    int m, n, i, j, sum = 0;
    float mean;

    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int arr[m][n];
    printf("Enter elements of the matrix:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    mean = (float)sum / (m * n);

    printf("Sum of the elements = %d\n", sum);
    printf("Mean of the elements = %.2f\n", mean);

    return 0;
}
