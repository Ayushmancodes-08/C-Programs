// WAP in C to display the cube of the number upto given integer using for loop
#include <stdio.h>
int main()
{
  int a,i;
  printf("Enter an Integer");
  scanf("%d",&a);
  printf("Cubes of numbers upto %d are:\n ",a);
  for(i=1;i<a;i++){
    printf("%d ",(i*i*i));
  }
return 0;
}