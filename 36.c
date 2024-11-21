#include <stdio.h>

void addMatrices(int a[3][3], int b[3][3], int result[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int a[3][3], int b[3][3], int result[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(int a[3][3], int b[3][3], int result[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transposeMatrix(int a[3][3], int result[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = a[i][j];
        }
    }
}

void printUpperLower(int a[3][3], int rows, int cols) {
    printf("Upper triangular matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i <= j)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }

    printf("Lower triangular matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i >= j)
                printf("%d ", a[i][j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main() {
    int choice;
    int a[3][3], b[3][3], result[3][3];
    int rows = 3, cols = 3;

    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    do {
        printf("\nMenu:\n");
        printf("1. Add Matrices\n");
        printf("2. Subtract Matrices\n");
        printf("3. Multiply Matrices\n");
        printf("4. Transpose of Matrix A\n");
        printf("5. Upper and Lower Triangular Matrices\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMatrices(a, b, result, rows, cols);
                printf("Result of Addition:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                subtractMatrices(a, b, result, rows, cols);
                printf("Result of Subtraction:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                multiplyMatrices(a, b, result, rows, cols);
                printf("Result of Multiplication:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                transposeMatrix(a, result, rows, cols);
                printf("Transpose of Matrix A:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                printUpperLower(a, rows, cols);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}
