//  Write a program to find sum of two numbers using user defined Functions. 
// Hint: The function will return sum value and have two arguments.
#include <stdio.h>
int sum(int a, int b);

int main() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = sum(num1, num2);
    printf("The sum of %d and %d is %d\n", num1, num2, result);
    return 0;
}
int sum(int a, int b) {
    return a + b;
}
