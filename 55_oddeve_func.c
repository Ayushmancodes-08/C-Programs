//  Write a program to find a number as even or odd using user defined Functions.
//   Hint: The function will not return any value and have one argument.
#include <stdio.h>
void checkEvenOdd(int number);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkEvenOdd(num);
    return 0;
}
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }
}
