#include <stdio.h>

int main() {
    int rows = 5;
    char ch = 'A'; // Base character

    // Outer loop controls rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints the SAME character 'i' times
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        ch++; // Move to the next letter ONLY after finishing the row
        printf("\n");
    }
    return 0;
}
