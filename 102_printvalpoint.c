// Write a program to print the values and address of the values of an array using
// pointers? Hint: use for loop for representation.
#include <stdio.h>

int main() {
    int arr[5];
    int *p = arr;

    printf("Enter 5 elements in the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    printf("The array elements and their addresses are:\n");
    for (int i = 0; i < 5; i++) {
        printf(" value %d at address %u\n", *(p + i), (p + i));
    }

    return 0;
}
