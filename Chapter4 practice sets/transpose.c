#include <stdio.h>

int main() {
    int matrix[50][50], transpose[50][50], n, flag = 1;

    printf("Enter the order of the matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Calculating transpose and checking symmetry simultaneously
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j]; // Transpose calculation
            if (matrix[i][j] != matrix[j][i]) flag = 0; // Symmetry check
        }
    }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    if (flag)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");

    return 0;
}
