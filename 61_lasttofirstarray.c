//  Write a program to print the 1D array (size 5) from last element to first element?
#include <stdio.h>
int main()
{
    int a[5] = {8, 7, 5, 6, 9};
    printf("All elements in array are:");
    for (int i = 4; i >=0; i--)
    {
        printf("%d ,", a[i]);
    }
    return 0;
}
