#include <stdio.h>

int main() {
    int r1, r2, c1, c2;
    int i, j, k;

    printf("Enter rows and columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // Ensure matrix multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible with the given dimensions.\n");
        return -1;
    }

    int a[r1][c1];
    int b[r2][c2];
    int c[r1][c2];

    // Input for matrix a
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input for matrix b
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize matrix c to 0
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output the result
    printf("Resulting matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
