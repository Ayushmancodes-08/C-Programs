// Write a program to search an element in a 2D array? (Hint: Enter the element to be searched)
#include <stdio.h>
int main()
{
    int n;
    int a[2][2] = {2,7,
                   9,4};
    printf("Enter the Element to search:");
    scanf("%d", &n);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
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