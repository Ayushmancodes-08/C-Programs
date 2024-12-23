// Write a program to reallocate space of 20 more using realloc() for an array of size
// 10?
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int temp;

    // Allocate memory for 10 integers
    arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    arr = (int *)realloc(arr, 20 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
        printf("Enter 20 elements:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array Elements:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    return 0;
}