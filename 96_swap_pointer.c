// Write a program in c to swap elements using call by reference.

#include <stdio.h>
void num(int *a, int *b);
int main()
{
    int x, y;
    printf("Enter two numbers");
    scanf("%d %d", &x, &y);
    printf("Before Swapping: x=%d and y=%d\n", x, y);
    num(&x, &y);
    printf("After Swapping: x=%d and y=%d", x, y);
    return 0;
}
void num(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
