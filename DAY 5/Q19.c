#include <stdio.h>

int main() {
    int num, i;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Validate the input
    if (num <= 0) {
        printf("Please enter a number greater than 0.\n");
        return 1; 
    }

    printf("Factors of %d are: ", num);
    
    // Loop through 1 to num to find factors
    for (i = 1; i <= num; ++i) {
        // If remainder is 0, i is a factor
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
