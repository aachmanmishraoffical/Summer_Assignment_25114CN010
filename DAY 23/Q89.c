#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256 // Total number of possible ASCII characters

// Function to find the first non-repeating character
char findFirstNonRepeating(char *str) {
    int freq[MAX_CHAR] = {0}; // Initialize frequency of all characters to 0
    int i;

    // Step 1: Count the frequency of each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Step 2: Scan the string from left to right to find the first character with a frequency of 1
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i]; // Return the first unique character found
        }
    }

    return '\0'; // Return null character if all characters repeat
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Read string including spaces, stopping at a newline
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character from fgets if present
    str[strcspn(str, "\n")] = '\0';

    char result = findFirstNonRepeating(str);

    if (result != '\0') {
        printf("The first non-repeating character is: '%c'\n", result);
    } else {
        printf("All characters are repeating or the string is empty.\n");
    }

    return 0;
}
