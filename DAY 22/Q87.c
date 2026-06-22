#include <stdio.h>
#include <string.h>

void countCharacterFrequency(char str[]) {
    // Array to store the frequency of all 256 possible ASCII characters
    int frequency[256] = {0}; 

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        // Skip newline character added by fgets
        if (str[i] == '\n') {
            continue;
        }
        frequency[(unsigned char)str[i]]++;
    }

    // Print the results
    printf("\nCharacter Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            // Check for printable characters to avoid messy terminal output
            if (i == ' ') {
                printf("' ' (space) : %d\n", frequency[i]);
            } else if (i == '\t') {
                printf("'\\t' (tab)  : %d\n", frequency[i]);
            } else {
                printf("'%c'         : %d\n", i, frequency[i]);
            }
        }
    }
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    // Safely read the line, including spaces
    fgets(str, sizeof(str), stdin);

    countCharacterFrequency(str);

    return 0;
}
