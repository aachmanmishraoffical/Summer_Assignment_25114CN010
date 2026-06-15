#include <stdio.h>

int main() {
    int n, i, temp;
    int count = 0; // Tracks the position for the next non-zero element

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

    // Display original array
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 3: Move zeroes to the end (Single Pass Loop)
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Swap current non-zero element with the element at 'count' index
            temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            
            // Move 'count' to the next available slot
            count++;
        }
    }

    // Step 4: Display the modified array
    printf("\nModified array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
