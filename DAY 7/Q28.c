#include <stdio.h>

// Recursive function to reverse a number
// 'num' is the remaining number, 'reversed' holds the accumulated result
int reverse_number(int num, int reversed) {
    // Base case: when no digits are left, return the accumulated result
    if (num == 0) {
        return reversed;
    }
    
    // Shift reversed left (multiply by 10) and add the last digit of num
    int next_reversed = (reversed * 10) + (num % 10);
    
    // Recursive call with the remaining digits
    return reverse_number(num / 10, next_reversed);
}

int main() {
    int num;

    // Take user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers by tracking the sign
    int is_negative = (num < 0);
    int absolute_num = is_negative ? -num : num;

    // Calculate reversed number
    int result = reverse_number(absolute_num, 0);
    
    // Restore the negative sign if applicable
    if (is_negative) {
        result = -result;
    }

    // Print result
    printf("Reversed number = %d\n", result);

    return 0;
}
