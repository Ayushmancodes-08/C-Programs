#include <stdio.h>
int main()
{
 float r,h,area;
 printf("Enter the radius of Cylinder");
 scanf("%f",&r);
 printf("Enter the height of Cylinder");
 scanf("%f",&h);
 area=3.14*r*r*h;
 printf("Volume of Cylinder=%f",area);
return 0;
}