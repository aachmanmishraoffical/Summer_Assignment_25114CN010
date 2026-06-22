#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    // Handle newline character if input is read using fgets
    if (str[right] == '\n') {
        str[right] = '\0';
        right--;
    }

    // Compare characters from both ends moving towards the center
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Using fgets instead of gets to prevent buffer overflow vulnerabilities
    fgets(str, sizeof(str), stdin);

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
