//  Write a program to find the sum of elements in an array using pointers? Hint: use
// for loop.
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; 
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}
