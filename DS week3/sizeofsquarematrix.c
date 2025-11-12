#include <stdio.h>

void readMatrix(int n, int arr[n][n]) {
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void displayMatrix(int n, int arr[n][n]) {
    printf("Matrix is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter size of the square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    readMatrix(n, arr);
    displayMatrix(n, arr);
    return 0;
}
