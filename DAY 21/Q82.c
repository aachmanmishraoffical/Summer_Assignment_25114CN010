#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int length = 0;
    int start, end;
    char temp;

    // Read string from the user (handles spaces)
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Step 1: Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Step 2: Initialize pointers for swapping
    start = 0;
    end = length - 1; // The last valid character index before '\0'

    // Step 3: Swap characters from both ends moving inward
    while (start < end) {
        // Classic swap logic using a temporary variable
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move the pointers closer to the center
        start++;
        end--;
    }

    // Display the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
