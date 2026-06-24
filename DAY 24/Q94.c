#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to compress the string
char* compressString(const char* src) {
    int len = strlen(src);
    if (len == 0) return "";

    // Allocate memory for the worst-case scenario 
    // (e.g., "ABCD" becomes "A1B1C1D1\0", which requires 2 * len + 1 bytes)
    char* dest = (char*)malloc(sizeof(char) * (2 * len + 1));
    if (dest == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    int destIdx = 0;

    for (int i = 0; i < len; i++) {
        // Append the current character
        dest[destIdx++] = src[i];

        // Count occurrences of the current character
        int count = 1;
        while (i + 1 < len && src[i] == src[i + 1]) {
            count++;
            i++;
        }

        // Convert the integer count to a string and append it to dest
        // sprintf returns the number of characters written
        destIdx += sprintf(&dest[destIdx], "%d", count);
    }

    dest[destIdx] = '\0'; // Null-terminate the compressed string

    // If compressed string isn't shorter, return a copy of the original string
    if (strlen(dest) >= len) {
        strcpy(dest, src);
    }

    return dest;
}

int main() {
    char str1[] = "AAAABBBCC";
    char* compressed1 = compressString(str1);
    printf("Original:   %s\n", str1);
    printf("Compressed: %s\n\n", compressed1);
    free(compressed1); // Always free dynamically allocated memory

    char str2[] = "ABC";
    char* compressed2 = compressString(str2);
    printf("Original:   %s\n", str2);
    printf("Compressed: %s\n\n", compressed2); // Output should be "ABC" because "A1B1C1" is longer
    free(compressed2);

    char str3[] = "AAAAAAAAAAAAA"; // Test case with double-digit count
    char* compressed3 = compressString(str3);
    printf("Original:   %s\n", str3);
    printf("Compressed: %s\n", compressed3);
    free(compressed3);

    return 0;
}
