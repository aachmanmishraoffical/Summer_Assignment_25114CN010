#include <stdio.h>

int main() {
    int n, i;

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

    // Step 3: Initialize largest and smallest with the first element
    int largest = arr[0];
    int smallest = arr[0];

    // Step 4: Compare with the rest of the elements
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Step 5: Display results
    printf("\nLargest element = %d", largest);
    printf("\nSmallest element = %d\n", smallest);

    return 0;
}
