#include <stdio.h>

int main() {
    int n, i, j;
    int IsLower = 1;

    printf("Enter the length of matrix (n): ");
    scanf("%d", &n); 

    int matrix[n][n]; 

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (matrix[i][j] != 0) {
                IsLower = 0;
                break;
            }
        }
    }

    if (IsLower) {
        printf("It is a lower triangular matrix\n");
    } else {
        printf("It is not a lower triangular matrix\n");
    }

    return 0;
}
