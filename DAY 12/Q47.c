#include <stdio.h>
#include <math.h>

// Helper function to check if a number is a perfect square
int isPerfectSquare(int x) {
    int s = round(sqrt(x));
    return (s * s == x);
}

// Function to check if a number is a Fibonacci number
// Logic: A number is Fibonacci if (5*n^2 + 4) or (5*n^2 - 4) is a perfect square
int isFibonacci(int num) {
    if (num < 0) {
        return 0;
    }
    return isPerfectSquare(5 * num * num + 4) || isPerfectSquare(5 * num * num - 4);
}

// Function to print the first N terms of the Fibonacci sequence
void printFibonacci(int terms) {
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Sequence (%d terms): ", terms);

    for (int i = 1; i <= terms; ++i) {
        printf("%lld ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int choice, value;

    printf("Choose an option:\n");
    printf("1. Print Fibonacci sequence up to N terms\n");
    printf("2. Check if a specific number is a Fibonacci number\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the number of terms: ");
        scanf("%d", &value);
        if (value <= 0) {
            printf("Please enter a positive integer.\n");
        } else {
            printFibonacci(value);
        }
    } else if (choice == 2) {
        printf("Enter an integer to check: ");
        scanf("%d", &value);
        if (isFibonacci(value)) {
            printf("%d is a Fibonacci number.\n", value);
        } else {
            printf("%d is not a Fibonacci number.\n", value);
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
