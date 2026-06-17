#include <stdio.h>

int main() {
    // 1. Define two input arrays
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10, 12};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // 2. Define destination array
    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    int i = 0, j = 0, k = 0;

    // 3. Alternate between arrays while both have elements remaining
    while (i < size1 && j < size2) {
        mergedArr[k++] = arr1[i++]; // Take from first array
        mergedArr[k++] = arr2[j++]; // Take from second array
    }

    // 4. Append any leftover elements from the first array
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }

    // 5. Append any leftover elements from the second array
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }

    // 6. Output the interleaved merged array
    printf("Interleaved merged array: ");
    for (int x = 0; x < mergedSize; x++) {
        printf("%d ", mergedArr[x]);
    }
    printf("\n");

    return 0;
}
