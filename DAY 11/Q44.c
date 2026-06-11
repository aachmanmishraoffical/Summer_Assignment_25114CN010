#include <stdio.h>

// Function declaration (prototype)
unsigned long long findFactorial(int n);

int main() {
    int num;
    unsigned long long factorial;

    // Taking user input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Handling negative input error
    if (num < 0) {
        printf("Error: Factorial of a negative number is not defined.\n");
    } else {
        // Calling the function and storing the returned value
        factorial = findFactorial(num);
        
        // Displaying the result
        printf("The factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}

// Function definition to calculate factorial iteratively
unsigned long long findFactorial(int n) {
    unsigned long long result = 1;

    // Loop to multiply numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}
