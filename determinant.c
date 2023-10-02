#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of the n: ");
    scanf("%d", &n);

    // Declare a matrix with dynamic size
    double mat[n][n];
    int i, j;

    // Input matrix elements from the user
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the %d element of row %d: ", j + 1, i + 1);
            scanf("%lf", &mat[i][j]);
        }
    }
    printf("\n");

    // Display the input matrix
    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" %lf ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    double multiplier;
    double divider;
    double determinant = 1.0;
    double swap[n];
    int sign = 1;

    // Gaussian Elimination
    for (int a = 0; a < n; a++) {
        divider = mat[a][a];
        
        // Check if the diagonal element is zero and swap rows if needed
        if (divider == 0) {
            if (a == n - 1 && mat[n - 1][n - 1] == 0) {
                determinant = 0.0;
                break;
            }
            for (j = 0; j < n; j++) {
                swap[j] = mat[a + 1][j];
                mat[a + 1][j] = mat[a][j];
                mat[a][j] = swap[j];
            }
            sign = -1 * sign;
        }
        divider = mat[a][a];

        // Normalize the current row to make the diagonal element 1
        for (j = a; j < n; j++) {
            mat[a][j] = mat[a][j] / divider;
        }
        determinant = determinant * divider;

        // Eliminate non-zero elements below the diagonal
        for (i = a + 1; i < n; i++) {
            multiplier = mat[i][a];
            for (j = 0; j < n; j++) {
                mat[i][j] = mat[i][j] - multiplier * mat[a][j];
            }
        }
    }

    // Calculate the determinant
    determinant = determinant * sign;

    printf("\nDeterminant = %lf\n", determinant);

    return 0;
}
