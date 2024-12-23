// Write a program to print the value of a variable: int number =50 using double
// pointer and triple pointer and also print the addresses at first pointer, second
// pointer and third pointer?
#include <stdio.h>
int main()
{
    int num = 50;
    int *ptr = &num;
    int **ptr1 = &ptr;
    int ***ptr2 = &ptr1;
    printf("1st pointer value:%d and address:%u\n", *ptr, ptr);
    printf("2nd pointer value:%d and address:%u\n", **ptr1, ptr1);
    printf("3rd pointer value:%d and address:%u", ***ptr2, ptr2);

    return 0;
}