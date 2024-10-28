//WAP to enter a number and check whether it is even using if statement
#include <stdio.h>
int main()
{
 int a;
 printf("Enter a number\n");
 scanf("%d",&a);
 if(a%2==0){
    printf("%d is Even Number",a);
 }
 if(a%2!=0){
    printf("%d is Odd Number",a);
 }
return 0;
}