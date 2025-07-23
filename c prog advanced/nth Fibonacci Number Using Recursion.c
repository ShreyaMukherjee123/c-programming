#include <stdio.h>

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Enter the position: ");
    scanf("%d", &n);
    printf("Fibonacci number = %d", fib(n));
    return 0;
}
