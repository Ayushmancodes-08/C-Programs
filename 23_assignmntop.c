// WAP to compute values using Assignment operator
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    a+=b;
    printf("After a+=b,a=%d\n",a);
    a-=b;
    printf("After a-=b,a=%d\n",a);
    a*=b;
    printf("After a*=b,a=%d\n",a);
    a/=b;
    printf("After a/=b,a=%d\n",a);
    a%=b;
    printf("After amod=b,a=%d\n",a);
    
    return 0;
}