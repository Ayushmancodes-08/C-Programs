// Write a program to print the values and address of the values of an array using
// pointers? Hint: use for loop for representation.
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

    printf("The array elements and their addresses are:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d has value %d at address %u\n", i + 1, *(p + i), (p + i));
    }

    return 0;
}
