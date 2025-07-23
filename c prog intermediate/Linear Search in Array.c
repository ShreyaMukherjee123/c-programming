#include <stdio.h>

int main() {
    int arr[100], n, x, i, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");
    return 0;
}
