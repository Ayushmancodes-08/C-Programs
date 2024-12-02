//  Write a program to find the average of a 2D array of size 3*3?
#include <stdio.h>
int main()
{   
    int sum=0;
    float avg;
    int a[3][3] = {2, 3, 4,
                   5, 6, 8,
                   7, 6, 5};
    printf(" Multiplication of the initialised Array =\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum=sum+a[i][j];
        }
    }
    avg=sum/9;
    printf("The average value of 2D Array is %f",avg);

    return 0;
}
