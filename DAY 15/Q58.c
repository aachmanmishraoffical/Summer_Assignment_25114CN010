#include <stdio.h>

int main() {
    int n, i, k, j, temp;

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

    // Step 3: Input the number of left rotations
    printf("\nEnter the number of positions to rotate left: ");
    scanf("%d", &k);

    // Optimize rotations if k is greater than array size n
    k = k % n;

    // Display original array
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 4: Perform left rotation k times
    for (i = 0; i < k; i++) {
        // Save the first element of the array
        temp = arr[0];
        
        // Shift all elements to the left by 1 position
        for (j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        
        // Move the saved first element to the very end
        arr[n - 1] = temp;
    }

    // Step 5: Display the rotated array
    printf("\nRotated array:  ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
