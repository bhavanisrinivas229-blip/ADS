#include <stdio.h>

int stack[5], top = -1;

int main() {

    // Push
    stack[++top] = 10;
    stack[++top] = 20;

    // Pop
    printf("Popped element: %d\n", stack[top--]);

    return 0;
}
