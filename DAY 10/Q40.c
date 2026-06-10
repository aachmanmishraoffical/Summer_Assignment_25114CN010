#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Inner Loop 1: Prints leading spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // Inner Loop 2: Counts UP from 'A'
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        
        // Inner Loop 3: Adjusts and counts DOWN back to 'A'
        ch -= 2; // Step back past the peak character
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}
