#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of the n:");
    scanf("%d", &n);

    double mat[n][n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the %d element of %d row:", j + 1, i + 1);
            scanf("%lf", &mat[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < n; i++) //for taking input from user in row
    {
        for (int j = 0; j < n; j++) //for taking input from user in column
        {
            printf(" %lf ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    double multipler;
    double divider;
    double determinate = 1;
    double swap[n];
    int sign = 1;

    for (int a = 0; a < n; a++) //for changing the value of the row
    {
        divider = mat[a][a];
        if (divider == 0) //if diagonal element became 0 then swap the above rows.
        {
            if (a == n - 1 && mat[n - 1][n - 1] == 0)
            {
                determinate = 0;
                break;
            }
            for (j = 0; j < n; j++) //foor swaping the rows
            {
                swap[j] = mat[a + 1][j];
                mat[a + 1][j] = mat[a][j];
                mat[a][j] = swap[j];
            }
            sign = -1 * sign;
        }
        divider = mat[a][a];
        for (j = a; j < n; j++) //dividing to make 1 (R1---->R1/a)
        {
            mat[a][j] = mat[a][j] / divider;
        }
        determinate = determinate * divider;

        for (i = a + 1; i < n; i++) //for changing the value of multiplying factor(a) and making 0(R2--->R2-aR1)
        {
            multipler = mat[i][a];
            for (j = 0; j < n; j++) //effect of (R2--->R2-aR1)
            {
                mat[i][j] = mat[i][j] - multipler * mat[a][j];
            }
        }
    }

    printf("\ndeterminate = %lf", determinate * sign);

    return 0;
}
