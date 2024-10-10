<<<<<<< HEAD
// WAP to accept a variable and display its adress
#include <stdio.h>
int main()
{
    int i, *j;
    printf("Enter value of i");
    scanf("%d", &i);
    j = &i;
    printf("value of i = %d", i);
    printf("address of i = %u", j);
    return 0;
=======
// WAP to accept a variable and display its adress
#include <stdio.h>
int main()
{
    int i, *j;
    printf("Enter value of i");
    scanf("%d", &i);
    j = &i;
    printf("value of i = %d", i);
    printf("address of i = %u", j);
    return 0;
>>>>>>> 9b51a6f6cec8905b3fbdceb99f15abaa274a2cbc
}