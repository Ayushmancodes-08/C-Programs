// Write a program to search an element in a 2D array? (Hint: Enter the element to be searched)
#include <stdio.h>
int main()
{
    int n;
    int a[3][3] = {1, 3, 5,
                   7, 9, 5,
                   8, 3, 6};
    printf("Enter the Element to search:");
    scanf("%d", &n);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (n == a[i][j])
            {
                printf("The number %d is at location %d,%d ", a[i][j], i+1, j+1);
                break;
            }
        }
        printf("\n");
    }
    return 0;
}