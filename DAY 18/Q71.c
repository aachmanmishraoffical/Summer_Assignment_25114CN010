#include <stdio.h>

int main() {
    // Array must be sorted for binary search to work
    int arr[] = {11, 12, 22, 25, 34, 64, 90}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int target = 25; // Element we want to find
    int low = 0;
    int high = n - 1;
    int mid;
    int found_idx = -1; // -1 means the target was not found

    printf("Searching for target: %d\n", target);

    // Inline Binary Search logic
    while (low <= high) {
        // Calculate the middle index (prevents potential integer overflow)
        mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            found_idx = mid; 
            break; // Target found, exit the loop immediately
        }
        // If target is greater, ignore the left half
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Print the search result
    if (found_idx != -1) {
        printf("Element found at index: %d\n", found_idx);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
