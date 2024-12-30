// Write a program to implement Quick Sort algorithm using C.
#include <stdio.h>
void quicksort(int *arr, int low, int high);
int partition(int *arr, int low, int high);
int main()
{
   int arr[6] = {6,5,3,8,4,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   quicksort(arr,0,n-1);
   for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
return 0;
}

void quicksort(int *arr, int low, int high){
    if(low<high){
        int pivinX=partition(arr,low,high);
        quicksort(arr,low,pivinX-1);
        quicksort(arr,pivinX+1,high);
    }
}
int partition(int *arr, int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
         if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
    }
    i++;
    int temp=arr[i];
    arr[i]=pivot;
    arr[high]=temp;
    return i;
    }

