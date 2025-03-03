//  Write a program to sort the elements in an array of size 5 by allocating the
// memory using calloc()?

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr; arr = (int *)calloc(5,sizeof(int));
    int temp;
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i < 5 - 1; i++)  {
        for (int j = 0; j < 5 - i - 1; j++){
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}