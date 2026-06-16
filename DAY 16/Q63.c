#include <stdio.h>

int main() {
    // 1. Define the input array and the target sum
    int arr[] = {8, 7, 2, 5, 3, 1};
    int target = 10;
    int size = sizeof(arr) / sizeof(arr);
    
    // Flag to track if at least one pair is found
    int pairFound = 0; 

    // 2. Outer loop selects the first element of the pair
    for (int i = 0; i < size - 1; i++) {
        
        // 3. Inner loop selects the second element (starts at i + 1 to avoid duplicates)
        for (int j = i + 1; j < size; j++) {
            
            // 4. Check if the sum of the two elements equals the target
            if (arr[i] + arr[j] == target) {
                printf("Pair found: %d and %d (Sum: %d)\n", arr[i], arr[j], target);
                pairFound = 1;
                
                // Break or remove 'break' if you want to find all possible pairs
                break; 
            }
        }
        
        // Stop outer loop if a pair is already found and you only need one
        if (pairFound) {
            break; 
        }
    }

    // 5. Handle the case where no such pair exists
    if (!pairFound) {
        printf("No pair found with the given sum %d.\n", target);
    }

    return 0;
}
