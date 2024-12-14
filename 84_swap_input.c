//  Write a program to swap the value of two inputted variable using function. Show the initial value
#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x, y;
    printf("Enter Two Value:");
    scanf("%d %d", &x, &y);
    printf("Before Swapping: x=%d and y=%d\n", x, y);
    swap(&x, &y);
    printf("After Swapping: x=%d and y=%d", x, y);
    return 0;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}