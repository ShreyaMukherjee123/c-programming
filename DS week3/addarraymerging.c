#include <stdio.h>

int main() {
    int n1, n2, i;
    
    printf("Enter the size of the 1st array: ");
    scanf("%d", &n1);
    
    printf("Enter the size of the 2nd array: ");
    scanf("%d", &n2);

    float a[n1], b[n2], c[n1 + n2];

    // Input 1st array
    printf("Enter %d elements of 1st array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%f", &a[i]);
        c[i] = a[i];
    }

    // Input 2nd array
    printf("Enter %d elements of 2nd array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%f", &b[i]);
        c[n1 + i] = b[i];
    }

    // Print merged array in reverse order
    printf("Merged array in reverse order:\n");
    for (i = n1 + n2 - 1; i >= 0; i--) {
        printf("%.2f ", c[i]);
    }

    printf("\n");
    return 0;
}