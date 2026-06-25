#include <stdio.h>

// Function to merge two sorted arrays
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0; // Index pointer for arr1
    int j = 0; // Index pointer for arr2
    int k = 0; // Index pointer for the merged array

    // Traverse both arrays simultaneously
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Store remaining elements of the first array (if any)
    while (i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Store remaining elements of the second array (if any)
    while (j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int n1, n2;

    // Input size and elements for the first sorted array
    printf("Enter the number of elements in the first array: ");
    if (scanf("%d", &n1) != 1) return 1;
    int arr1[n1];
    printf("Enter %d sorted elements for the first array: ", n1);
    for (int i = 0; i < n1; i++) {
        if (scanf("%d", &arr1[i]) != 1) return 1;
    }

    // Input size and elements for the second sorted array
    printf("Enter the number of elements in the second array: ");
    if (scanf("%d", &n2) != 1) return 1;
    int arr2[n2];
    printf("Enter %d sorted elements for the second array: ", n2);
    for (int i = 0; i < n2; i++) {
        if (scanf("%d", &arr2[i]) != 1) return 1;
    }

    // Allocate memory for the output merged array
    int merged[n1 + n2];

    // Merge the arrays
    mergeSortedArrays(arr1, n1, arr2, n2, merged);

    // Print the result
    printf("\nThe merged sorted array is:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
