#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    int remainder;

    // Negative numbers are not palindromes
    if (num < 0) {
        return 0;
    }

    // Reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num /= 10;
    }

    // Return 1 (true) if original and reversed match, else 0 (false)
    return (original == reversed);
}

int main() {
    int number;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and print the result
    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}
