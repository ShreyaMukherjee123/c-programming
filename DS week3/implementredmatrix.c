#include <stdio.h>

void readMatrix(int p, int q, int r, int a[p][q][r]) {
    int i, j, k;
    printf("Enter elements of %dx%dx%d matrix:\n", p, q, r);

    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < r; k++) {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
}

int main() {
    int p, q, r;
    printf("Enter dimensions of the 3D matrix (p q r): ");
    scanf("%d %d %d", &p, &q, &r);

    int a[p][q][r];
    readMatrix(p, q, r, a);

    printf("Matrix elements entered successfully!\n");
    return 0;
}
