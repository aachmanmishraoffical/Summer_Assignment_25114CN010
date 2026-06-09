#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop counts down from max rows to 1
    for (int i = rows; i >= 1; i--) {
        // Inner loop prints numbers from 1 up to the current value of i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
