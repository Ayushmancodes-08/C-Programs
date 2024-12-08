// Write a program to multiply two 2D arrays of size 3*3? 
#include <stdio.h>
int main()
{
    int a[3][3] = {2, 3, 4,
                   5, 6, 8,
                   7, 6, 5};
    int b[3][3] = {2, 3, 4,
                   5, 5, 7,
                   9, 3, 2};
    int result[3][3];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
