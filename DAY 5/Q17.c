#include <stdio.h>

int main() {
    int num, sum = 0;

    // Get input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Loop to find proper divisors up to num / 2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // Add divisor to sum
        }
    }

    // Verify if the sum of divisors matches the original number
    if (sum == num && num > 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
