//  Write a program to swap two values using user defined Functions. The function will not return any value and have two arguments.
#include <stdio.h>
void num(int a,int b);
int main()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d %d",&x,&y);
    printf("x=%d and y=%d\n",x,y);
    printf("After Swapping:\n");
    num(x,y);
return 0;
}
void num(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("x=%d and y=%d",a,b);
}

