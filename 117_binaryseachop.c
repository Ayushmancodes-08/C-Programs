//  Write a program to search an element using Binary Search algorithm.
#include <stdio.h>
int main()
{ 
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int start = 0, end = sizeof(arr) / sizeof(arr[0]) - 1,n,mid,position=-1;
    mid=(start+end)/2;
    printf("Enter the element to search: ");
    scanf("%d",&n);
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==n){
            position=mid;
            printf("Element %d found at position %d",mid+1,position+1);
            break;
        }
        else if(arr[mid]<n){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    if(position==-1){
        printf("Element not found in array");
    }
    return 0;
}