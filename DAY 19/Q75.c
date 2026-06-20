#include <stdio.h>

#define MAX 100

int main() {
    int rows, cols, i, j;
    int matrix[MAX][MAX], transpose[MAX][MAX];

    // Get the dimensions of the matrix
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input elements for the matrix
    printf("\nEnter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Perform matrix transposition
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display the transposed matrix
    // Note: The outer loop now runs up to 'cols' and the inner loop up to 'rows'
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
