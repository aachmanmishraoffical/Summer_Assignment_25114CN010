#include <stdio.h>

int main() {
    int decimal, temp;
    int binary[32]; // Array to hold up to 32 binary bits
    int i = 0;

    // Prompt the user to enter a decimal integer
    printf("Enter a decimal number: ");
    if (scanf("%d", &decimal) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle the special case where the input is 0
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Keep track of the original number for the output message
    temp = decimal;

    // Conversion loop: repeatedly divide by 2 and store remainders
    while (temp > 0) {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    // Print the accumulated binary array in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
