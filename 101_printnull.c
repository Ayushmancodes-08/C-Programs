// Write a program to display the content in the NULL pointer?
#include <stdio.h>

int main() {
    int *ptr = NULL; // Initialize a NULL pointer

    printf("Pointer initialized as NULL.\n");

   
    if (ptr == NULL) {
        printf("Error: Cannot dereference a NULL pointer.\n");
    } else {
        printf("Value at the pointer: %d\n", *ptr); // This line would cause undefined behavior
    }

return 0;
}