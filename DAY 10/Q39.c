#include <stdio.h>

int main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        // Inner Loop 1: Prints leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Inner Loop 2: Counts up from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Inner Loop 3: Counts down from (i - 1) back to 1
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
