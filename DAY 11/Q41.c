#include <stdio.h>

// Function declaration (prototype)
int addNumbers(int a, int b);

int main() {
    int num1, num2, sum;

    // Taking user input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calling the function and storing the returned value
    sum = addNumbers(num1, num2);

    // Displaying the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

// Function definition to calculate the sum
int addNumbers(int a, int b) {
    return a + b;
}
