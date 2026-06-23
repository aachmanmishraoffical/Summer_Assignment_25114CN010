#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256 // Total number of possible ASCII characters

// Function to find the first repeating character
char findFirstRepeating(char *str) {
    int visited[MAX_CHAR] = {0}; // Initialize visited status of all characters to 0 (false)
    int i;

    // Scan the string from left to right
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];

        // If the character has already been visited, it is the first repeating character
        if (visited[ch] == 1) {
            return str[i];
        }

        // Mark the character as visited
        visited[ch] = 1;
    }

    return '\0'; // Return null character if no characters repeat
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Read string including spaces, stopping at a newline
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character from fgets if present
    str[strcspn(str, "\n")] = '\0';

    char result = findFirstRepeating(str);

    if (result != '\0') {
        printf("The first repeating character is: '%c'\n", result);
    } else {
        printf("No repeating characters found.\n");
    }

    return 0;
}
