#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int i = 0;

    // Read string from the user (handles spaces)
    printf("Enter a string in lowercase: ");
    scanf("%[^\n]", str);

    // Loop through each character until the null terminator
    while (str[i] != '\0') {
        // Check if the current character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 from ASCII value to make it uppercase
            str[i] = str[i] - 32;
        }
        i++; // Move to the next character
    }

    // Display the converted uppercase string
    printf("Uppercase string: %s\n", str);

    return 0;
}
