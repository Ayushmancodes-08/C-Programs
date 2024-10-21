#include <stdio.h>
int main()
{
  float a,b,h,area;
  printf("Enter the length of first parallrl side");
  scanf("%f",&a);
  printf("Enter the length of second parallrl side");
  scanf("%f",&b);
  printf("Enter the height");
  scanf("%f",&h);
  area = 0.5*(a+b)*h;
  printf("Area of TRapezium=%f",area);
return 0;
}