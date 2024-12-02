// Write a program to find sum of the array (size 5)?
#include <stdio.h>
int main()
{
    int sum = 0;
    int a[5] = {8, 7, 5, 6, 9};
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum of array elements :%d",sum);
    return 0;
}