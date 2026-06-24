#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if str2 is a rotation of str1
bool areRotations(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are different, they cannot be rotations of each other
    if (len1 != len2) {
        return false;
    }

    // Allocate memory for the temporary concatenated string (len1 * 2 + 1 for '\0')
    char *temp = (char *)malloc(sizeof(char) * (len1 * 2 + 1));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return false;
    }

    // Create the concatenated string: temp = str1 + str1
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    char *ptr = strstr(temp, str2);

    // Free the dynamically allocated memory to avoid leaks
    free(temp);

    // If strstr found the substring, ptr will not be NULL
    return (ptr != NULL);
}

int main() {
    char str1[] = "ABCD";
    char str2[] = "CDAB";

    if (areRotations(str1, str2)) {
        printf("\"%s\" is a rotation of \"%s\"\n", str2, str1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\"\n", str2, str1);
    }

    // Testing with a negative case
    char str3[] = "ACBD";
    if (areRotations(str1, str3)) {
        printf("\"%s\" is a rotation of \"%s\"\n", str3, str1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\"\n", str3, str1);
    }

    return 0;
}
