#include <stdio.h>

int main() {
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = 3.1416 * r * r;
    printf("Area = %.2f\n", area);
    return 0;
}
