//  Write a program to sort the elements in an array of 5 5 by allocating the
// memory using malloc()?
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int temp;
    arr = (int *)malloc(5 * sizeof(int));
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
    // printf("\n");
    free(arr);

    return 0;
}