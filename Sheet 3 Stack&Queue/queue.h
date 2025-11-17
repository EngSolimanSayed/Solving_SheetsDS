#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "global.h"

typedef struct {
    int front;
    int rear;
    int size;
    Customer arr[MAX];
} Queue;

void createQueue(Queue *q);
int isQueueEmpty(Queue q);
int isQueueFull(Queue q);
void enqueue(Customer c, Queue *q);
Customer dequeue(Queue *q);
int sizeQueue(Queue q);

#endif
