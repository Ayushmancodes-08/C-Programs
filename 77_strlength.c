// Write a program to enter a string and find its length?
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20];
 printf("Enter a string:");
 gets(ch);
int len=strlen(ch);
printf("The size of String is %d",len);
return 0;
}