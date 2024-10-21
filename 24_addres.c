
// WAP to accept a variable and display its adress
#include <stdio.h>
int main()
{
    int i, *j;
    printf("Enter value of i");
    scanf("%d", &i);
    j = &i;
    printf("value of i = %d\n", i);
    printf("address of i = %u", j);
    return 0;
}