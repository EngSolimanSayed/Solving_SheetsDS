// Q2->6
// Queue.c
#include <stdio.h>
#include "Queue.h"
void createQueue(queue *q)
{
    q->front = 0;
    q->rear = MAX - 1;
    q->size = 0;
}
int isQueueEmpty(queue q)
{
    return q.size == 0;
}
int isQueueFull(queue q)
{
    return q.size == Max;
}
void Enqueue(i value, queue *q)
{
    if (isQueueFull(*q))
    {
        printf("Error:Queue is Full");
        return;
    }
    else
    {
        q->rear = (q->rear + 1) % Max;
        q->arr[q->rear] = value;
        q->size++;
    }
}
i Dequeu(queue *q)
{
    if (isQueueEmpty(*q))
    {
        printf("Error:Queue is Empty");
        return -1;
    }
    else
    {
        i value = q->arr[q->front];
        q->front = (q->front + 1) % Max;
        q->size--;
        return value;
    }
}
i lastElement(queue q)
{
    if (isQueueEmpty(*q))
    {
        printf("Error:Queue is Empty");
        return -1;
    }
    else
    {
        return q.arr[q.rear];
    }
}
i firstElement(queue q)
{
    if (isQueueEmpty(*q))
    {
        printf("Error:Queue is Empty");
        return -1;
    }
    else
    {
        return q.arr[q.front];
    }
}
void DestroyQueue(queue *q)
{
    q->front = 0;
    q->rear = Max - 1;
    q->size = 0;
}
void CopyQueue(queue *origin, queue *copy)
{
    createQueue(copy);
    copy->front = origin->front;
    copy->rear = origin->rear;
    copy->size = origin->size;
    for (int j = 0; j < Max; j++)
        copy->arr[j] = origin->arr[j];
}
i SizeQueue(queue q)
{
   return q.size; 
}
