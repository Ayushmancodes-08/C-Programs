// Write a program to return the average value of an array (size 5) using functions?
//  Hint: the function has no arguments and average value will be returned?
#include <stdio.h>
float avg();
int main()
{
    float average=avg();
    printf("The average value of Array is %f",average);
    return 0;
}
float avg()
{
    int sum=0;
    float avg;
    int a[5];
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    avg = sum / 5;
    return avg;
}