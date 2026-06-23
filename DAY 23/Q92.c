#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256 // Total number of possible ASCII characters

// Function to find the maximum occurring character
char findMaxOccurringChar(char *str) {
    int freq[MAX_CHAR] = {0}; // Initialize frequency of all characters to 0
    int i;
    int maxCount = 0;
    char maxChar = '\0';

    // Step 1: Count the frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Step 2: Find the maximum frequency by traversing the string to maintain first-appearance order
    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];
        if (freq[ch] > maxCount) {
            maxCount = freq[ch];
            maxChar = str[i];
        }
    }

    return maxChar;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Read string including spaces, stopping at a newline
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character from fgets if present
    str[strcspn(str, "\n")] = '\0';

    // Check if the input string is empty
    if (strlen(str) == 0) {
        printf("The string is empty.\n");
        return 0;
    }

    char result = findMaxOccurringChar(str);
    
    printf("The maximum occurring character is: '%c'\n", result);

    return 0;
}
