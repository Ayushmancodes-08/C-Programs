// Write a program to find average of 5 subjects using user defined Functions.
// Hint : The function will return average value and have five arguments.
#include <stdio.h>
float avg(int a,int b,int c,int d,int e);
int main()
{
 int m1,m2,m3,m4,m5;
 float average;
 printf("Enter mark of 5 subjects");
 scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
 average=avg(m1,m2,m3,m4,m5);
 printf("The average mark is %f",average);
return 0;
}
float avg(int a,int b,int c,int d,int e){
    return (a+b+c+d+e)/5;
}

