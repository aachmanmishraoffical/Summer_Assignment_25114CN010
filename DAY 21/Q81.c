#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int length = 0;

    // Read string from the user (handles spaces using %[^\n])
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Loop until the null character is reached
    while (str[length] != '\0') {
        length++;
    }

    // Display the result
    printf("The length of the string is: %d\n", length);

    return 0;
}
