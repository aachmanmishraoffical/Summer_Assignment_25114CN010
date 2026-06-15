#include <stdio.h>

int main() {
    int n, i, j;
    int has_duplicates = 0;

    // Step 1: Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int counted[n]; // Array to track elements we already printed as duplicates

    // Initialize the tracking array to 0
    for (i = 0; i < n; i++) {
        counted[i] = 0;
    }

    // Step 2: Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nDuplicate elements in the array are:\n");

    // Step 3: Find duplicates using a nested loop
    for (i = 0; i < n; i++) {
        // If this element was already marked as a duplicate, skip it
        if (counted[i] == 1) {
            continue;
        }

        int count = 1; // Count occurrences of arr[i]

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1; // Mark the future duplicate index so we don't re-print it
            }
        }

        // If it appeared more than once, it is a duplicate
        if (count > 1) {
            printf("%d (appears %d times)\n", arr[i], count);
            has_duplicates = 1;
        }
    }

    // Step 4: Handle case where all elements are unique
    if (!has_duplicates) {
        printf("No duplicate elements found in the array.\n");
    }

    return 0;
}
