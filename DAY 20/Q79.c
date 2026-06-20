#include <stdio.h>

#define MAX 100

int main() {
    int rows, cols, i, j;
    int matrix[MAX][MAX];
    int row_sum;

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

    // Calculate and print row-wise sums
    printf("\nRow-wise Sums:\n");
    for (i = 0; i < rows; i++) {
        row_sum = 0; // Reset sum for the current row
        for (j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, row_sum);
    }

    return 0;
}
