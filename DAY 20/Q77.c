#include <stdio.h>

#define MAX 100

int main() {
    int r1, c1, r2, c2, i, j, k;
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];

    // Input dimensions for both matrices
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Rule validation: c1 must equal r2
    if (c1 != r2) {
        printf("\nError: Multiplication not possible! Columns of 1st matrix must equal rows of 2nd matrix.\n");
        return 0;
    }

    // Input elements for the first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // Initialize the result matrix elements to 0 and perform multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0; // Reset sum for current cell
            for (k = 0; k < c1; k++) { // k tracks columns of 'first' and rows of 'second'
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    // Display the multiplied matrix
    printf("\nResultant Matrix (Multiplication):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
