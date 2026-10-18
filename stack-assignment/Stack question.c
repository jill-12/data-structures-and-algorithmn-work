
// traverse and display of the stack contents
#include <stdio.h>
#define MAX 6

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack is FULL\n");
    } else {
        stack[++top] = value;
        printf("Added: %d\n", value);
    }
}

int pop() {
    if (top == -1) {
        printf("Stack is EMPTY\n");
        return -1;
    } else {
        int value = stack[top--];
        printf("Removed: %d\n", value);
        return value;
    }
}

void display() {                          // TRAVERSE + DISPLAY
    if (top == -1) {
        printf("Stack is EMPTY\n");
        return;
    }
    printf("Stack (top to bottom): ");
    for (int i = top; i >= 0; i--) {      // traverse
        printf("%d ", stack[i]);          // display
    }
    printf("\n");
}

int main() {
    // ---- FILL ----
    push(1); push(2); push(3);
    push(4); push(5); push(6);

    // ---- SHOW STACK ----
    printf("\n");
    display();

    // ---- EMPTY ----
    printf("\n--- Popping all ---\n");
    while (top != -1) {
        pop();
    }

    // ---- SHOW FINAL STATE ----
    printf("\n");
    display();

    return 0;
}
