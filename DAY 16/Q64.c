#include <stdio.h>

int main() {
    // 1. Define the input array
    int arr[] = {2, 4, 2, 8, 3, 2, 4, 9, 2, 4};
    int size = sizeof(arr) / sizeof(arr);

    // 2. Outer loop to select an element
    for (int i = 0; i < size; i++) {
        
        // 3. Inner loop to check subsequent elements for duplicates
        for (int j = i + 1; j < size; j++) {
            
            // If a duplicate is found
            if (arr[i] == arr[j]) {
                
                // Shift all subsequent elements one position to the left
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                
                // Reduce the active size of the array
                size--;
                
                // Decrement j to re-check the current position with the shifted element
                j--;
            }
        }
    }

    // 4. Output the modified array with unique elements
    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
