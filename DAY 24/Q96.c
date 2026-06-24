#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to remove duplicate characters in-place
void removeDuplicates(char *str) {
    // Boolean array to track seen ASCII characters (initialized to false)
    bool seen[256] = { false };
    
    int readIndex = 0;
    int writeIndex = 0;
    
    // Process each character until the end of the string
    while (str[readIndex] != '\0') {
        unsigned char currentChar = (unsigned char)str[readIndex];
        
        // If the character hasn't been seen yet, keep it
        if (!seen[currentChar]) {
            seen[currentChar] = true;
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
        readIndex++;
    }
    
    // Null-terminate the modified string
    str[writeIndex] = '\0';
}

int main() {
    char str1[] = "programming";
    printf("Original:  %s\n", str1);
    removeDuplicates(str1);
    printf("Result:    %s\n\n", str1); // Output: progamin

    char str2[] = "hello world";
    printf("Original:  %s\n", str2);
    removeDuplicates(str2);
    printf("Result:    %s\n\n", str2); // Output: helo wrd (keeps first space)

    char str3[] = "AAAAAAA";
    printf("Original:  %s\n", str3);
    removeDuplicates(str3);
    printf("Result:    %s\n", str3);   // Output: A

    return 0;
}
