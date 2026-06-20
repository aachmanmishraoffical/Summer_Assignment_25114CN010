#include <stdio.h>

#define MAX 100

int main() {
    int rows, cols, i, j;
    int matrix[MAX][MAX];
    int is_symmetric = 1; // Flag variable: 1 means symmetric, 0 means not symmetric

    // Get dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Rule 1: A symmetric matrix must be square
    if (rows != cols) {
        printf("\nThe matrix is NOT symmetric because it is not a square matrix.\n");
        return 0;
    }

    // Input elements for the matrix
    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < rows; i++) {
        // Optimization: 'j < i' only checks elements below the main diagonal
        for (j = 0; j < i; j++) { 
            if (matrix[i][j] != matrix[j][i]) {
                is_symmetric = 0; // Mismatch found
                break;            // Break out of the inner loop
            }
        }
        if (is_symmetric == 0) {
            break; // Break out of the outer loop
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

    // Final verdict
    if (is_symmetric == 1) {
        printf("\nVerdict: The matrix IS a symmetric matrix.\n");
    } else {
        printf("\nVerdict: The matrix is NOT a symmetric matrix.\n");
    }

    return 0;
}
