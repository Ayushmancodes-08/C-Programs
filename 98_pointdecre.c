//  Write a program to show the Decrement of a pointer by 1, 2, and 3 by showing the decimal form address
#include <stdio.h>
int main()
{
    int a[3];
    int *ptr = a;
    for (int i =2; i >=0; i--)
    {
        printf("The address of %d is %u \n",i, ptr);
        ptr--;
    }

    return 0;
}
