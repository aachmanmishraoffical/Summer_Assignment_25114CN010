#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop counts down from maximum rows to 1
    for (int i = rows; i >= 1; i--) {
        // Inner loop prints exactly 'i' stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after completing the row
        printf("\n");
    }
    return 0;
}
