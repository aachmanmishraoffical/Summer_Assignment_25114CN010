#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int original = num;
    int temp = num;
    int digits = 0;
    int sum = 0;
    int remainder;

    // Negative numbers cannot be Armstrong numbers
    if (num < 0) {
        return 0;
    }

    // Count the total number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of digits raised to the power of total digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        // round() handles potential floating-point inaccuracies from pow()
        sum += round(pow(remainder, digits));
        temp /= 10;
    }

    // Return 1 if sum matches the original number, else 0
    return (sum == original);
}

int main() {
    int number;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and print the result
    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
