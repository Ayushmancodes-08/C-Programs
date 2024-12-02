// Write a program to find average of the array (size 5)
#include <stdio.h>
int main()
{
    int sum = 0; 
    float avg;
    int a[5] = {8, 7, 5, 6, 9};
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    avg=sum/5;
    printf("The Average of array elements :%f",avg);
    return 0;
}
