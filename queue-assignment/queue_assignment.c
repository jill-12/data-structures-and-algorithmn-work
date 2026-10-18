#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

// check if full
int isFull() {
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}

// check if empty
int isEmpty() {
    if (front == -1 || front > rear)
        return 1;
    else
        return 0;
}

// add to queue
void enqueue(int x) {
    if (isFull()) {
        printf("Queue is FULL. Cannot add %d\n", x);
    } else {
        if (front == -1)
            front = 0;
        rear = rear + 1;
        queue[rear] = x;
        printf("%d added to queue\n", x);
    }
}

// remove from queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is EMPTY. Cannot remove\n");
    } else {
        printf("%d removed from queue\n", queue[front]);
        front = front + 1;
    }
}

// show queue
void display() {
    int i;
    if (isEmpty()) {
        printf("Queue is EMPTY\n");
    } else {
        printf("Queue: ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

// main function
int main() {
    int choice, value;

    do {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            enqueue(value);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            display();
        } else if (choice == 4) {
            printf("Bye!\n");
        } else {
            printf("Wrong choice\n");
        }

    } while (choice != 4);

    return 0;
}
