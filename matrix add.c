#include <stdio.h>

int main() {
    int size = 3;
    int arr[3][3];
    int arr1[3][3];
    int arr2[3][3]; // Initialize result matrix with zeros

    // Input for first matrix
    printf("Enter elements for the first 3x3 matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements for the second 3x3 matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    // Matrix addition
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr2[i][j] = (arr[i][j] * arr1[i][j]) + (arr[i][j+1] * arr1[i+1][j]) + (arr[i][j+2] * arr1[i+2][j]);
        }
    }

    // Output the result
    printf("Result of the matrix addition:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
