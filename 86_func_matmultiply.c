// Write a program that will accept two matrices using function and multiply them using function
// and show the result using function.
#include <stdio.h>
void multiply(int x[2][2], int y[2][2]);
int main()
{
    int i, j, a[2][2], b[2][2];
    printf("Enter the 1st matrix of 2X2:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the 2nd matrix of 2X2:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    multiply(a ,b);
    return 0;
}
void multiply(int x[2][2], int y[2][2])
{
    int res[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                res[i][j] += x[i][k] * y[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}