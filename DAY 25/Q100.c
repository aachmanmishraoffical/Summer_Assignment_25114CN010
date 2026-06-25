#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 50

void sortWordsByLength(char words[][MAX_LENGTH], int n) {
    char temp[MAX_LENGTH];

    // Bubble sort algorithm based on string length
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare lengths of adjacent words
            if (strlen(words[j]) > strlen(words[j + 1])) {
                // Swap the words if the first is longer than the second
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of words: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_WORDS) {
        printf("Invalid number of words.\n");
        return 1;
    }

    // Clear the trailing newline character from the input buffer
    getchar();

    char words[n][MAX_LENGTH];

    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%s", words[i]) != 1) {
            return 1;
        }
    }

    // Sort the list of words by length
    sortWordsByLength(words, n);

    // Display the sorted results
    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Length: %lu)\n", words[i], (unsigned long)strlen(words[i]));
    }

    return 0;
}
