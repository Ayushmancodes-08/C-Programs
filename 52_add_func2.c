// Write a program to find sum of two numbers using user defined Functions. Hint: The function will return sum value and have no arguments.
#include <stdio.h>
int sum();
int main()
{
    int result=sum();
    printf("Addition result is %d", result);
    return 0;
}

int sum()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    return a+b;
}