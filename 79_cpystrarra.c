// WAP to copy one string into another string
#include <stdio.h>
#include <string.h>
int main()
{
  char str[50]="Ayushman";
  char st[50]="";
  strcpy(st,str);
  printf(" Copied String is %s",st);

return 0;
}