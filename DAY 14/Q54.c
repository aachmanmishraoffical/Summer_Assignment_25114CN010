#include <stdio.h>

int main() {
    int n, i, target;
    int count = 0; // Counter for frequency

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

    // Step 3: Input the element whose frequency needs to be checked
    printf("\nEnter the element to find its frequency: ");
    scanf("%d", &target);

    // Step 4: Count occurrences
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    // Step 5: Display the result
    if (count > 0) {
        printf("The element %d occurs %d time(s) in the array.\n", target, count);
    } else {
        printf("The element %d does not exist in the array.\n", target);
    }

    return 0;
}
