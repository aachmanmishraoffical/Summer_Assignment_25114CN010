#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;

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

    // Step 3: Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Step 4: Calculate average (using typecasting for accuracy)
    average = (float)sum / n;

    // Step 5: Display results
    printf("\nSum of all elements = %d", sum);
    printf("\nAverage of all elements = %.2f\n", average);

    return 0;
}
