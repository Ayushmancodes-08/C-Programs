//  Write a program to swap 2D array of size 3*3?
#include <stdio.h>
int main()
{
    int sum = 0;
    float avg;
    int temp;
    int a[3][3] = {2, 3, 4,
                   5, 6, 8,
                   7, 6, 5};
    int b[3][3] = {2, 3, 8,
                   4, 5, 3,
                   7, 6, 5};

    printf("The array of a:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("The array of b:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp = a[i][j];
            a[i][j] = b[i][j];
            b[i][j] = temp;
        }
    }
    printf("The array after swapping of a:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("The array after swapping of b:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
