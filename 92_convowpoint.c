// Write a program in c to count the number of vowels and consonants in string using a pointer.
#include <stdio.h>
#include <string.h>
void stricoun(char *c, int *vow, int *conso);
int main()
{
    char ch[20];
    int vowe = 0, conson = 0;

    printf("Enter a string: ");
    gets(ch);
    stricoun(ch, &vowe, &conson);
    printf("Number of vowels: %d\n", vowe);
    printf("Number of consonants: %d\n", conson);
    return 0;
}
void stricoun(char *c, int *vowels, int *consonants)
{
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == 'A' || c[i] == 'a' ||
            c[i] == 'E' || c[i] == 'e' || c[i] == 'I' ||
            c[i] == 'i' || c[i] == 'O' || c[i] == 'o' ||
            c[i] == 'U' || c[i] == 'u')
        {
            (*vowels)++;
        }
        else if ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))
        {
            (*consonants)++;
        }
    }
}
