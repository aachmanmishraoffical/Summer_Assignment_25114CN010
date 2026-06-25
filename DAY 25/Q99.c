#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 50

void sortNames(char names[][MAX_LENGTH], int n) {
    char temp[MAX_LENGTH];

    // Bubble sort algorithm to sort names
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent names lexicographically
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap the names if they are in the wrong order
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of names: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_NAMES) {
        printf("Invalid number of names.\n");
        return 1;
    }

    // Consume the leftover newline character from the buffer
    getchar();

    char names[n][MAX_LENGTH];

    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        if (fgets(names[i], sizeof(names[i]), stdin) == NULL) {
            return 1;
        }
        // Remove trailing newline character added by fgets
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    // Sort the list of names
    sortNames(names, n);

    // Display the sorted results
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
