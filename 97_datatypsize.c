// Write a program to print the size of int, float, double and character ?
#include <stdio.h>
int main()
{
    int a;
    float b;
    char ch;
    double bm;
 printf("Size of Integer= %d bytes\n 
 Size of Float= %d bytes\n
  Size of Character= %d bytes\n
  Size of Double= %d bytes\n",sizeof(a),sizeof(b),sizeof(ch),sizeof(bm));
//  printf("Size of float= %d bytes\n",sizeof(b));
//  printf("Size of character= %d bytes\n",sizeof(ch));
//  printf("Size of Double= %d bytes",sizeof(bm));
return 0;
}