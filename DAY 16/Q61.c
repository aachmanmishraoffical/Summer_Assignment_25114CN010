#include <stdio.h>

// Function to find the missing number
int findMissingSum(int arr[], int size) {
    // If array has 'size' elements, N should be size + 1
    int n = size + 1; 
    
    // Calculate expected sum of numbers from 1 to N
    int expectedSum = (n * (n + 1)) / 2;
    
    // Calculate the actual sum of elements in the array
    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    
    // The difference is the missing number
    return expectedSum - actualSum;
}

int main() {
    // Array of size 7 containing distinct elements from 1 to 8 (6 is missing)
    int arr[] = {8, 2, 4, 5, 3, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int missingNumber = findMissingSum(arr, size);
    
    printf("The missing number is: %d\n", missingNumber);
    
    return 0;
}
