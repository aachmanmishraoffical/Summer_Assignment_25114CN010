#include <stdio.h>

int main() {
    int n, i, key;
    int found = 0; // Flag variable initialized to 0 (false)

    // Step 1: Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 3: Input the element to search for
    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    // Step 4: Perform Linear Search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index position: %d (Element %d)\n", i, i + 1);
            found = 1; // Mark as found
            break;     // Stop the loop early since we found the item
        }
    }

    // Step 5: Check if the element was not in the array
    if (!found) {
        printf("Element %d is not present in the array.\n", key);
    }

    return 0;
}
