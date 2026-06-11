#include <stdio.h>

// Function declaration (prototype)
int findMaximum(int a, int b);

int main() {
    int num1, num2, max;

    // Taking user input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calling the function and storing the returned value
    max = findMaximum(num1, num2);

    // Displaying the result
    printf("The maximum number is: %d\n", max);

    return 0;
}

// Function definition to find the maximum
int findMaximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
