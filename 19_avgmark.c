#include <stdio.h>
int main()
{
    int a, b, c, d, e, avg;
    printf("Enter the marks of 5 subjects\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    printf("Average of their marks = %d", avg);
    return 0;
}