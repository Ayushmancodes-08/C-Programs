//Write a program to declare and pass an 1D array to a function and print the values
// of that array at the function definition? (Hint: function has no return value and no
// arguments.)

#include <stdio.h>
void arra();
int main()
{
    arra();
return 0;
}
 
void arra(){
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}
