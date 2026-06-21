#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int i = 0;
    int vowels = 0;
    int consonants = 0;

    // Read string from the user (including spaces)
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Loop through the string until the null terminator is reached
    while (str[i] != '\0') {
        char ch = str[i];

        // Check if the character is a lowercase letter
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Check if the character is an uppercase letter
        else if (ch >= 'A' && ch <= 'Z') {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        
        i++; // Move to the next character
    }

    // Display the results
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}
