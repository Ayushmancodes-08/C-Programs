// Write a program to find sum of two numbers using user defined Functions. Hint: The function will not return any value and have no arguments.
#include <stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    printf("Addition result is %d",(a+b));
}