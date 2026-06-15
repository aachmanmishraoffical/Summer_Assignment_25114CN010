#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Ask the user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of the specified size
    int arr[n];

    // Step 2: Take array inputs from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 3: Display the stored array elements
    printf("\nThe elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
