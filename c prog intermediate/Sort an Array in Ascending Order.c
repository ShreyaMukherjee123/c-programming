#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    printf("Sorted array: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
