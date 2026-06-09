#include <stdio.h>

int main() {
    int size = 5; // Height and width of the square

    // Outer loop for rows
    for (int i = 1; i <= size; i++) {
        // Inner loop for columns
        for (int j = 1; j <= size; j++) {
            // Check if current position is on the boundary
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("* ");
            } else {
                printf("  "); // Two spaces to match the "* " formatting width
            }
        }
        // Move to the next line after completing a row
        printf("\n");
    }
    return 0;
}
