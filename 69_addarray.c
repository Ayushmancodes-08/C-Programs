// Write a program to add two 2D arrays of size 2*2?
#include <stdio.h>
int main()
{
    int a[2][2] = {2, 3,
                   4, 5};
    int b[2][2] = {2, 3,
                   4, 5};
    printf(" Sum of the initialised Array =\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
               printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}