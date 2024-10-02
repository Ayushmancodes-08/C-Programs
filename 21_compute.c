//compute expression

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,evaluation;
  printf("Enter the value of three operators");
  scanf("%d %d %d",&a,&b,&c);
  evaluation=(a+b/2)-pow(c,2);
  printf("%d",evaluation);
return 0;
}