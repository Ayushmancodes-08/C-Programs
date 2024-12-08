// 1. Write a program to count vowels in a string?
#include <stdio.h>
#include <string.h>
int main()
{
    int i, c = 0;
    char ch[20];
    printf("Enter a alphabet string: ");
    gets(ch);
    for (i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == 'A' || ch[i] == 'a' ||
            ch[i] == 'E' || ch[i] == 'e' || ch[i] == 'I' ||
            ch[i] == 'i' || ch[i] == 'O' || ch[i] == 'o' ||
            ch[i] == 'U' || ch[i] == 'u')
            c++;
    }
    printf("No.of vowels=%d", c);
    return 0;
}