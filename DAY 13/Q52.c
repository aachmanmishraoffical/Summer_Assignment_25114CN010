#include <stdio.h>

int main() {
    int n, i;
    int even_count = 0;
    int odd_count = 0;

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

    // Step 3: Count even and odd elements
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Step 4: Display results
    printf("\nTotal Even elements = %d", even_count);
    printf("\nTotal Odd elements = %d\n", odd_count);

    return 0;
}

