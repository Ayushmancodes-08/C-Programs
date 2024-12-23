// Write a program to swap two numbers a=10 and b=20 using pointers and no use
// of third variable?
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *ptra = &a, *ptrb = &b;
    printf("Before swapping:\n");
    printf("a = %d\n", *ptra);
    printf("b = %d\n", *ptrb);
    *ptra = *ptra + *ptrb;
    *ptrb = *ptra - *ptrb;
    *ptra = *ptra - *ptrb;
    printf("After swapping:\n");
    printf("a = %d\n", *ptra);
    printf("b = %d\n", *ptrb);
    return 0;
}
