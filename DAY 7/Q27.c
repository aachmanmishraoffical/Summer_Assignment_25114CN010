#include <stdio.h>

// Recursive function to find sum of digits
int sum_of_digits(int n) {
    // Base case: if number becomes 0, return 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: add last digit to the sum of remaining digits
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int num;

    // Take user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Convert negative number to positive for digit summation
    int absolute_num = (num < 0) ? -num : num;

    // Calculate sum
    int total_sum = sum_of_digits(absolute_num);

    // Print result
    printf("Sum of digits of %d = %d\n", num, total_sum);

    return 0;
}
