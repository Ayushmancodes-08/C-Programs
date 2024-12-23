// Write a program in c to find the factorial of a number using pointers.
#include <stdio.h>
void factorial(int n, int *result);
int main()
{
    int number, fact;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);
    factorial(number, &fact);
    printf("The factorial of %d is %d\n", number, fact);
    return 0;
}
void factorial(int n, int *result)
{
    *result = 1;
    for (int i = 1; i <= n; i++)
    {
        *result = (*result)*i;
    }
}
