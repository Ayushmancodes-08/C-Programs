// Write a program in c to find the maximum numbers using a pointer.
#include <stdio.h>
int main()
{
    int num1 = 10, num2 = 20, num3 = 15;
    int *ptr1 = &num1, *ptr2 = &num2, *ptr3 = &num3;
    int *max;
    if (*ptr1 > *ptr2)
    {
        if (*ptr1 > *ptr3)
        {
            max = ptr1;
        }
        else
        {
            max = ptr3;
        }
    }
    else
    {
        if (*ptr2 > *ptr3)
        {
            max = ptr2;
        }
        else
        {
            max = ptr3;
        }
    }
    printf("The greatest number is: %d\n", *max);

    return 0;
}
