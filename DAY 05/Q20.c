#include <stdio.h>

int main() {
    long long n;
    long long max_prime = -1;

    // Get input from the user
    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) != 1 || n <= 1) {
        printf("Please enter a valid integer greater than 1.\n");
        return 1;
    }

    // 1. Divide out all factors of 2
    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }

    // 2. Divide out odd factors up to the square root of n
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }

    // 3. If n is still greater than 2, the remaining number is prime
    if (n > 2) {
        max_prime = n;
    }

    // Output the result
    printf("The largest prime factor is: %lld\n", max_prime);

    return 0;
}
