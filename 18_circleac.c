// WAP to find area and circumferecne of a circle.
#include <stdio.h>
int main()
{
    int r;
    float area, circum;
    printf("Enter the radius of circle");
    scanf("%d", &r);
    area = 3.14 * r * r;
    circum = 2 * 3.14 * r;
    printf("Area of the Circle  = %f", area);
    printf("Circumference of the Circle  = %f", circum);
    return 0;
}