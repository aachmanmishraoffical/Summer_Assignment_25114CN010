#include <stdio.h>

int main() {
    // 1. Define two input arrays (with some overlapping duplicate numbers)
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6, 8, 1};

    int size1 = sizeof(arr1) / sizeof(arr1);
    int size2 = sizeof(arr2) / sizeof(arr2);

    printf("Union of the two arrays: ");

    // 2. Process the first array: Print elements, skipping duplicates within arr1 itself
    for (int i = 0; i < size1; i++) {
        int isDuplicate = 0;
        
        // Check if arr1[i] already appeared earlier in arr1
        for (int j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        // If it is a unique element in arr1, print it
        if (!isDuplicate) {
            printf("%d ", arr1[i]);
        }
    }

    // 3. Process the second array: Print elements only if they don't exist in arr1 or earlier in arr2
    for (int i = 0; i < size2; i++) {
        int isPresent = 0;

        // Check if arr2[i] exists anywhere in the first array (arr1)
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                isPresent = 1;
                break;
            }
        }

        // If not in arr1, check if arr2[i] appeared earlier in arr2 itself to avoid duplicates
        if (!isPresent) {
            for (int j = 0; j < i; j++) {
                if (arr2[i] == arr2[j]) {
                    isPresent = 1;
                    break;
                }
            }
        }

        // If the element is completely new, print it
        if (!isPresent) {
            printf("%d ", arr2[i]);
        }
    }

    printf("\n");
    return 0;
}
