#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop controls the current row number
    for (int i = 1; i <= rows; i++) {
        // Inner loop controls how many times to print the number
        for (int j = 1; j <= i; j++) {
            printf("%d ", i); // Printing 'i' repeats the row number
        }
        printf("\n");
    }
    return 0;
}
