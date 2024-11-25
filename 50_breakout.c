// Write a program to print till 4 to 11 only when the rounds start from 4 till 20 using break statement.
#include <stdio.h>
int main()
{
  printf("Numbers from 4 to 20 skipping 5 and 7 are:\n");
  for(int i=4;i<=20;i++){ 
    printf("%d ",i);
    if(i==11)
       break;    
  }
  return 0;
}