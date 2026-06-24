#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Function to find the longest word in a sentence
void findLongestWord(const char *sentence, char *longestWord) {
    int maxLen = 0;
    int currentLen = 0;
    int startIdx = 0;
    int maxStartIdx = 0;
    
    int i = 0;
    while (sentence[i] != '\0') {
        // Skip leading spaces or punctuation to find the start of a word
        while (sentence[i] != '\0' && (isspace((unsigned char)sentence[i]) || ispunct((unsigned char)sentence[i]))) {
            i++;
        }
        
        // If we hit the end of the string, exit the loop
        if (sentence[i] == '\0') {
            break;
        }
        
        // Mark the starting index of the current word
        startIdx = i;
        currentLen = 0;
        
        // Count characters until we hit a space, punctuation, or end of string
        while (sentence[i] != '\0' && !isspace((unsigned char)sentence[i]) && !ispunct((unsigned char)sentence[i])) {
            currentLen++;
            i++;
        }
        
        // Check if the current word is longer than the previous maximum
        if (currentLen > maxLen) {
            maxLen = currentLen;
            maxStartIdx = startIdx;
        }
    }
    
    // Copy the longest word found into the output buffer and null-terminate it
    strncpy(longestWord, &sentence[maxStartIdx], maxLen);
    longestWord[maxLen] = '\0';
}

int main() {
    char sentence[] = "Learning programming in C is absolutely magnificent, isn't it?";
    char longest[100]; // Buffer to store the longest word
    
    findLongestWord(sentence, longest);
    
    printf("Original Text: %s\n", sentence);
    printf("Longest Word:  %s\n", longest);
    printf("Word Length:   %lu\n", strlen(longest));
    
    return 0;
}
