// 4. Write a program to enter a string and reverse the string?
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20];
    printf("Enter a string:");
    gets(ch);
    puts(ch);
    printf("The Reverse of String is %s", strrev(ch));
    return 0;
}