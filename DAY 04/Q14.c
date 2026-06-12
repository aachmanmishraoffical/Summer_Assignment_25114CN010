#include <stdio.h>

// Function to find the nth Fibonacci term iteratively
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 0; // F(0)
    int b = 1; // F(1)
    int c;     // F(n)

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the position (n) to find the Fibonacci term: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Position must be a non-negative integer.\n");
    } else {
        printf("The %d-th Fibonacci term is: %d\n", n, fibonacci(n));
    }

    return 0;
}
