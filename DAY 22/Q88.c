#include <stdio.h>
#include <string.h>

// Function to remove all space characters from a string in-place
void removeSpaces(char str[]) {
    int i = 0; // Index to read characters
    int j = 0; // Index to write non-space characters

    while (str[i] != '\0') {
        // Check for common space characters (space, tab, newline)
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    // Set the null terminator at the new shortened length
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Safe string reading that includes whitespaces
    fgets(str, sizeof(str), stdin);

    removeSpaces(str);

    printf("Result: %s\n", str);

    return 0;
}
