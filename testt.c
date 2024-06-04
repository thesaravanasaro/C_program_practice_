#include <stdio.h>
void multiplyMatrices(int firstMatrix[2][2], int secondMatrix[2][2], int result[2][2]) {
    int i, j, k;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            result[i][j] = 0;
        }
    }
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            for (k = 0; k < 2; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
void printMatrix(int matrix[2][2]) {
    int i, j;
    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 2; ++j) {
            printf("%d ", matrix[i][j]);
            if (j == 1) {
                printf("\n");
            }
        }
    }
}
int main() {
    int firstMatrix[2][2] = { {1, 2}, {3, 4} };
    int secondMatrix[2][2] = { {5, 6}, {7, 8} };
    int result[2][2]; 
    multiplyMatrices(firstMatrix, secondMatrix, result);
    printf("Result of matrix multiplication:\n");
    printMatrix(result);
    return 0;
}
