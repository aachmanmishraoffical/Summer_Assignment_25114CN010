#include <stdio.h>
#include <string.h>

// Function to count words in a sentence
int countWords(char str[]) {
    int count = 0;
    int inWord = 0; // Flag to track if we are inside a word

    for (int i = 0; str[i] != '\0'; i++) {
        // Check for whitespace characters
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0; // We hit a space, so we are no longer in a word
        } 
        // If the character is not a space and we are not already tracking a word
        else if (inWord == 0) {
            inWord = 1; // Mark that we entered a new word
            count++;    // Increment the word count
        }
    }
    return count;
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    // Use fgets to safely read the entire line, including spaces
    fgets(sentence, sizeof(sentence), stdin);

    int totalWords = countWords(sentence);
    printf("Total number of words: %d\n", totalWords);

    return 0;
}
