#include <stdio.h>

int main() {
    int n, i, j,Sym=1;

    printf("Enter the side length of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n], transpose[n][n];

    printf("Enter the values of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elements [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if(matrix[i][j] != transpose[i][j]){
                Sym=0;
                break;
            }
        
        }
        printf("\n");
    }
    if(Sym==1)
            printf("Your matrix is symmetric.\n ");
    else    
            printf("Your matrix is not symmetric.\n");
            
}