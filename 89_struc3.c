// 3. Write a program to find the total size taken by Union members (for ex. Int a, float b,
// etc.)?
#include <stdio.h>

union Example {
    int a;
    float b;
    char c;
};

int main() {
    union Example ex;
    
    printf("Size of structure members:\n");
    printf("int: %d bytes\n",sizeof(ex.a));
    printf("float: %d bytes\n",sizeof(ex.b));
    printf("char: %d bytes\n",sizeof(ex.c));
    printf("Total size of Union: %d bytes\n",sizeof(ex));
    
    return 0;
}