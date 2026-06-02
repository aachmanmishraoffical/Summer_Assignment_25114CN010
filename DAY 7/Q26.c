#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: 0th Fibonacci is 0, 1st Fibonacci is 1
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // Recursive case: sum of the two preceding numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;

    // Take user input
    printf("Enter the number of terms to display: ");
    scanf("%d", &terms);

    // Validate input
    if (terms <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("Fibonacci Series: ");
        // Loop to print the series up to the specified number of terms
        for (int i = 0; i < terms; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }

    return 0;
}
