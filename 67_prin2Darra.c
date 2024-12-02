//  Write a program to print the elements in a 2D array of size 3*3?
#include <stdio.h>
int main()
{
    int a[3][3] = {1, 3, 5,
                   7, 9, 5,
                   8, 3, 6};
    printf("The Elements of array are:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}