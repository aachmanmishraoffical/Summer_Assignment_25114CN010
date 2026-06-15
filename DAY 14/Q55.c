#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int arr[n];

    // Step 2: Input the array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 3: Initialize largest and second largest using array elements
    int largest = arr[0];
    int second_largest = -1; // Temporary placeholder flag
    int found_second = 0;    // Flag to check if a valid second largest exists

    // Step 4: Find the largest and identify a base for second_largest
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
            found_second = 1;
        } else if (arr[i] < largest) {
            if (!found_second || arr[i] > second_largest) {
                second_largest = arr[i];
                found_second = 1;
            }
        }
    }

    // Step 5: Display the result
    if (!found_second) {
        printf("\nThere is no distinct second largest element (all elements are equal).\n");
    } else {
        printf("\nLargest element = %d", largest);
        printf("\nSecond largest element = %d\n", second_largest);
    }

    return 0;
}
