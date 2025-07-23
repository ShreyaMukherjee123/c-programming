#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    a = x;
    b = y;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (x * y) / gcd;
    printf("GCD = %d\nLCM = %d", gcd, lcm);
    return 0;
}
