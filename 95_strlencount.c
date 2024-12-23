// Write a program in c to calculate the length of a string using a pointer.
#include <stdio.h>
int main()
{
    char str[100];
    int length = 0;
    char *ptr = str;

    printf("Enter a string: ");
    gets(str);
        while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    printf("The length of the string is: %d\n", length);

    return 0;
}
