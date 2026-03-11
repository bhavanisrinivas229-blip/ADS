#include <stdio.h>

int main() {
    int stack[5], top = -1;

    // Push elements
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    // Display stack
    printf("Stack elements:\n");
    for(int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }

    return 0;
}
