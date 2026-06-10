#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Inner Loop 1: Prints decreasing leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Inner Loop 2: Prints increasing stars with a trailing space
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
