// Convert centigrade to farhenheit.
#include <stdio.h>
int main()
{
 int cen,far;
printf("Enter temperature in Centigrade");
scanf("%d",&cen);
far=(cen*9/5)+32;
printf("Temperature in Farhenit=%d",far);
return 0;
}