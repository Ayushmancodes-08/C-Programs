//WAP to enter the age of a person and check whether eligible to vote or not using if else statement

#include <stdio.h>
int main()
{
    int age;
  printf("Enter the age of a person ");
  scanf("%d",&age);
  if(age>=18){
    printf("The Person is eligible to vote");
  }
   else{
    printf("The Person is not eligible to vote");
  }
return 0;
}