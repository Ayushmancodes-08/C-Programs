// Write a program to enter 5 values into the array using for loop find the average of the sum of the array?7
#include <stdio.h>
int main()
{
    int sum = 0; 
    float avg;
    int a[5];
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    avg=sum/5;
    printf("The Average of array elements :%f",avg);
    return 0;
}