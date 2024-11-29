//  Warite a program to find the average of even numbers between 150 to 230 using user defined functions and for loop.
//  Hint: function has average return value and have no arguments.
#include <stdio.h>
float avg();
int main()
{
    float average;
    average=avg();
    printf("Average of even numbers between 150 to 230 is %f", average);
    return 0;
}

float avg()
{
    int sum = 0,c=0;
    for (int i = 150; i <= 230; i++)
    {
        if (i % 2 == 0){
            sum = sum+ i;
            c++;
        }
    }
    return sum/c;
}
