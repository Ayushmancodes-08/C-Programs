// Write a program in cto store an array using a pointor. 
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n]; 
    int *p = arr;
    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i); 
    }
    printf("The array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i)); 
    }
    printf("\n");

    return 0;
}
