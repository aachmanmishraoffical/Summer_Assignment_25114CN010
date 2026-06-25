#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 256  // Extended ASCII limit to support all characters

void findCommonCharacters(const char str1[], const char str2[]) {
    int freq1[MAX_LIMIT] = {0};
    int freq2[MAX_LIMIT] = {0};
    int found = 0;

    // 1. Count the frequency of each character in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        // Casting to unsigned char handles extended characters safely
        freq1[(unsigned char)str1[i]]++;
    }

    // 2. Count the frequency of each character in the second string
    for (int i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)str2[i]]++;
    }

    // 3. Compare frequencies and print common characters
    printf("Common characters: ");
    for (int i = 0; i < MAX_LIMIT; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            // Pick the minimum frequency to account for exact duplicate counts
            int common_count = (freq1[i] < freq2[i]) ? freq1[i] : freq2[i];
            
            for (int j = 0; j < common_count; j++) {
                printf("%c ", i);
            }
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    char str1[200];
    char str2[200];

    // Read input strings from user safely (including spaces)
    printf("Enter the first string: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) return 1;
    // Remove the trailing newline character added by fgets
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) return 1;
    str2[strcspn(str2, "\n")] = '\0';

    // Call the function to display shared characters
    findCommonCharacters(str1, str2);

    return 0;
}
