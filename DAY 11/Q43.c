#include <stdio.h>
#include <stdbool.h>

// Function declaration (prototype)
bool isPrime(int n);

int main() {
    int num;

    // Taking user input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calling the function and displaying the result
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

// Function definition to check prime status
bool isPrime(int n) {
    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        return false;
    }

    // Check for factors from 2 up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Factor found, so it is not prime
        }
    }

    return true; // No factors found, so it is prime
}
