// Write a program to show the freeing of space using free()?
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter 5 elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Entered elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    printf("Memory has been freed.\n");

    return 0;
}