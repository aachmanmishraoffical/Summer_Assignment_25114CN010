#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long calculate_factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // Recursive case: n * factorial(n - 1)
    return n * calculate_factorial(n - 1);
}

int main() {
    int num;

    // Take user input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Validate input for negative numbers
    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        // Calculate and print the result
        unsigned long long result = calculate_factorial(num);
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}
