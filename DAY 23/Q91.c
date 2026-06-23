#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256 // Total number of possible ASCII characters

// Function to check if two strings are anagrams
int isAnagram(char *str1, char *str2) {
    int count[MAX_CHAR] = {0}; // Initialize count of all characters to 0
    int i;

    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0; // False
    }

    // Update count array using both strings
    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++; // Increment for first string
        count[(unsigned char)str2[i]]--; // Decrement for second string
    }

    // If strings are anagrams, all counts must be 0
    for (i = 0; i < MAX_CHAR; i++) {
        if (count[i] != 0) {
            return 0; // False
        }
    }

    return 1; // True
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    if (isAnagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }

    return 0;
}
