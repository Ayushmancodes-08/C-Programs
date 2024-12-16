// 4. Write a program to access a member of a Union using pointer and display the result of
// it?
#include <stdio.h>

union Example {
    int a;
    float b;
    char c;
};

int main() {
    union Example ex;
    int *p;

    ex.a = 10;
    p = &ex.a;
    printf("Value of union member accessed through pointer: %d\n", *p);

return 0;
}