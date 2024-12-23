//  Write a program to sort the elements in an array of size 5 by allocating the
// memory using calloc()?

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr;
    int temp;
    arr = (int *)calloc(5,sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}