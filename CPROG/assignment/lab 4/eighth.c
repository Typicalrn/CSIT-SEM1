//8. Perform addition, subtraction, and multiplication of two 2D arrays (matrices).#include <stdio.h>

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);

    int A[rows][cols], B[rows][cols], sum[rows][cols], diff[rows][cols], prod[rows][cols];

    // Input elements of matrix A
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition of matrices
    printf("Matrix A + B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Subtraction of matrices
    printf("Matrix A - B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            diff[i][j] = A[i][j] - B[i][j];
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    // Multiplication of matrices
    printf("Matrix A * B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            prod[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                prod[i][j] += A[i][k] * B[k][j];
            }
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}