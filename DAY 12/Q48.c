#include <stdio.h>

// Function to check if a number is a perfect number
int isPerfect(int num) {
    int sum = 0;

    // Numbers less than or equal to 0 cannot be perfect numbers
    if (num <= 0) {
        return 0;
    }

    // Find and sum all proper divisors
    // A divisor cannot be greater than half of the number
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Return 1 if sum of divisors equals the original number, else 0
    return (sum == num);
}

int main() {
    int number;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and print the result
    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
