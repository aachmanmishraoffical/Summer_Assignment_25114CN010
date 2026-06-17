#include <stdio.h>

int main() {
    // 1. Define two input arrays (with some overlapping numbers)
    int arr1[] = {1, 3, 4, 5, 7, 3};
    int arr2[] = {2, 3, 5, 6, 3, 1};

    int size1 = sizeof(arr1) / sizeof(arr1);
    int size2 = sizeof(arr2) / sizeof(arr2);

    int intersectionFound = 0;
    printf("Intersection of the two arrays: ");

    // 2. Loop through each element of the first array
    for (int i = 0; i < size1; i++) {
        
        // 3. Check if arr1[i] was already processed earlier to prevent duplicate output
        int isDuplicate = 0;
        for (int k = 0; k < i; k++) {
            if (arr1[i] == arr1[k]) {
                isDuplicate = 1;
                break;
            }
        }
        
        // If it is a duplicate inside arr1, skip checking it against arr2
        if (isDuplicate) {
            continue;
        }

        // 4. Check if the unique element exists inside the second array (arr2)
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                intersectionFound = 1;
                break; // Found a match, move to the next element in arr1
            }
        }
    }

    // 5. Handle the case where no common elements exist
    if (!intersectionFound) {
        printf("No common elements found.");
    }

    printf("\n");
    return 0;
}
