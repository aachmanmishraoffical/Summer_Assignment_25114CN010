#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop counts down from max rows to 1
    for (int i = rows; i >= 1; i--) {
        // Inner Loop 1: Prints increasing leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Inner Loop 2: Prints decreasing stars with a trailing space
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
