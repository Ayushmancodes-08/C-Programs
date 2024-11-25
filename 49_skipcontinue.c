// Write a program to print from 4 to 20 by skipping values 5 and 7 using continue statement.
#include <stdio.h>
int main()
{
  printf("Numbers from 4 to 20 skipping 5 and 7 are:\n");
  for(int i=4;i<=20;i++){
    if(i==5||i==7)
       continue;
    else
       printf("%d ",i);
  }
  return 0;
}