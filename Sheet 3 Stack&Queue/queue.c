#include "queue.h"
#include<stdio.h>

void createQueue(Queue *q) {
    q->front = 0;
    q->rear = MAX - 1;
    q->size = 0;
}

int isQueueEmpty(Queue q) {
    return q.size == 0;
}

int isQueueFull(Queue q) {
    return q.size == MAX;
}

void enqueue(Customer c, Queue *q) {
    if (!isQueueFull(*q)) {
        q->rear = (q->rear + 1) % MAX;
        q->arr[q->rear] = c;
        q->size++;
    }
}

Customer dequeue(Queue *q) {
    if (!isQueueEmpty(*q)) {
        Customer c = q->arr[q->front];
        q->front = (q->front + 1) % MAX;
        q->size--;
        return c;
    }
    Customer empty = {"", -1};
    return empty;
}

int sizeQueue(Queue q) {
    return q.size;
}
