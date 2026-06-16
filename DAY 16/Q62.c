#include <stdio.h>

int main() {
    // 1. Define the input array
    int arr[] = {2, 4, 2, 8, 3, 2, 4, 9, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxElement = arr[0];
    int maxCount = 0;

    // 2. Outer loop to select each element
    for (int i = 0; i < size; i++) {
        int currentCount = 0;

        // 3. Inner loop to count occurrences of the selected element
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }

        // 4. Update maximum frequency and the element if a higher count is found
        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxElement = arr[i];
        }
    }

    // 5. Output the result
    printf("Element with maximum frequency: %d\n", maxElement);
    printf("Occurrences: %d times\n", maxCount);

    return 0;
}
