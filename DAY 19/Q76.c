#include <stdio.h>

#define MAX 100

int main() {
    int size, i, j;
    int matrix[MAX][MAX];
    int primary_sum = 0, secondary_sum = 0;

    // Get the size of the square matrix
    printf("Enter the size of the square matrix (Rows/Cols): ");
    scanf("%d", &size);

    // Input elements for the matrix
    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate diagonal sums using a single loop
    for (i = 0; i < size; i++) {
        primary_sum += matrix[i][i];                  // Elements where row equals column
        secondary_sum += matrix[i][size - 1 - i];     // Elements from opposite top corner down
    }

    // Display the matrix
    printf("\nYour Matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the results
    printf("\nSum of Primary Diagonal: %d\n", primary_sum);
    printf("Sum of Secondary Diagonal: %d\n", secondary_sum);

    return 0;
}
