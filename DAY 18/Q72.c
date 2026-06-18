#include <stdio.h>

int main() {
    int arr[] = {12, 90, 34, 11, 64, 22, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp, swapped;

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Inline Bubble Sort for descending order
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;

        for (int j = 0; j < n - i - 1; j++) {
            // Flip the comparison operator (<) to sort descending
            if (arr[j] < arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = 1;
            }
        }

        // Exit early if the array is already sorted
        if (swapped == 0) {
            break;
        }
    }

    printf("Sorted array in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
