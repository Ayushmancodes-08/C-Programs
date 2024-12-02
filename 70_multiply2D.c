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
    printf(" Multiplication of the initialised Array =\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j] * b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
