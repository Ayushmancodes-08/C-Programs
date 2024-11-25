// WAP to check that a number is palindrone or not
#include <stdio.h>
int main()
{
    int n, k, sum = 0, dig;
    printf("Enter a number");
    scanf("%d", &n);
    k = n;
    while (k != 0)
    {
        dig = k % 10;
        sum = sum * 10 + dig;
        k = k / 10;
    }
    if (n == sum)
        printf("It is a palindrone number");
    else
        printf("It is not a palindrone number");
    return 0;
}