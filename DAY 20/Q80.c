#include <stdio.h>

#define MAX 100

int main() {
    int rows, cols, i, j;
    int matrix[MAX][MAX];
    int col_sum;

    // Get matrix dimensions
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input elements for the matrix
    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nYour Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate and print column-wise sums
    printf("\nColumn-wise Sums:\n");
    for (j = 0; j < cols; j++) {
        col_sum = 0; // Reset sum for the current column
        for (i = 0; i < rows; i++) {
            col_sum += matrix[i][j]; // Notice the indices: i for row, j for col
        }
        printf("Sum of Column %d = %d\n", j + 1, col_sum);
    }

    return 0;
}
