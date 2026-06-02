#include <stdio.h>

int main() {
    long long binaryNumber;
    int decimalValue = 0;
    int base = 1; // Represents 2^0 initially
    long long temp;

    // Ask user for the binary input
    printf("Enter a binary number (composed of 1s and 0s): ");
    scanf("%lld", &binaryNumber);

    temp = binaryNumber;

    // Loop to extract digits and calculate decimal value
    while (temp > 0) {
        int lastDigit = temp % 10; // Extract the rightmost digit
        
        // Add the product of the digit and its positional power of 2
        decimalValue += lastDigit * base; 

        base = base * 2;          // Move to the next power of 2 (2^1, 2^2, etc.)
        temp = temp / 10;         // Remove the rightmost digit
    }

    // Print the final result
    printf("%lld in binary = %d in decimal\n", binaryNumber, decimalValue);

    return 0;
}
