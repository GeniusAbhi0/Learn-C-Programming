#include <stdio.h>

int main() {
    int m, n, p, q;
    int a[100][100], b[100][100], result[100][100] = {0};

    // Input dimensions of matrix A
    printf("Enter the order of matrix A (M x N): ");
    scanf("%d %d", &m, &n);

    // Input dimensions of matrix B
    printf("Enter the order of matrix B (P x Q): ");
    scanf("%d %d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Matrix multiplication not possible (N must equal P).\n");
        return 0;
    }

    // Input elements of matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Input elements of matrix B
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &b[i][j]);

    // Multiply matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the resulting matrix
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
