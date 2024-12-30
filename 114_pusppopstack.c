// WAP to implement push and pop in Stack
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int stack[MAX];
int top = -1;
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = value;
        printf("Pushed %d to stack\n", value);
    }
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        int value = stack[top--];
        printf("Popped %d from stack\n", value);
        return value;
    }
}

int main() {
    push(10);
    push(20);
    pop();
    pop();
    pop();
    return 0;
}