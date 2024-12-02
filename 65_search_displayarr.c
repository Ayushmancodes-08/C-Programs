//  Write a program to find an element in an array (size 10) and display its location or index
#include <stdio.h>
int main()
{
  int a[10];
  int n;
  printf("Enter 10 elements in array:\n");
  for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
  }
  printf("The element to be searched:");
  scanf("%d",&n);
  for(int i=0;i<10;i++){
    if(n==a[i]){
    printf("The element %d is at index no: %d ",n,i );
    printf("\n");
    // break;
    }
  }
return 0;
}
