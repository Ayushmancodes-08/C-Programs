// WAP in c to display the pattern like right-angle triangle using *(asterik) using for loop
#include <stdio.h>
int main()
{
 int i,j;
 for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
 }
return 0;
}