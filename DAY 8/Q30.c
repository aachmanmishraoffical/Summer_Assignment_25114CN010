#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for managing the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Move to the next line after completing a row
        printf("\n");
    }
    return 0;
}
