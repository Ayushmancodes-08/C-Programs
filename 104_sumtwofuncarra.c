// Write a program to find the sum of two numbers a and b using Pointer to function
// operation
#include <stdio.h>
int sum(int a, int b);
int main() {
    int (*ptr)(int, int);
    ptr = sum;
    int a = 10, b = 20;
    int result = ptr(a, b);
    printf("Sum of %d and %d is %d\n", a, b, result);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
