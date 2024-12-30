#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};
void queue(struct Queue* q, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (q->rear == NULL) {
        q->front = q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("%d queued.\n", value);
}
void dequeue(struct Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    struct Node* temp = q->front;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }
    printf("%d dequeued.\n", temp->data);
    free(temp);
}

void printQueue(struct Queue* q) {
    struct Node* temp = q->front;
    printf("Queue: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Queue q = {NULL, NULL};
    queue(&q, 10);
    queue(&q, 20);
    queue(&q, 30);
    printQueue(&q);
    dequeue(&q);
    dequeue(&q);
    printQueue(&q);
    dequeue(&q);
    dequeue(&q);

    return 0;
}