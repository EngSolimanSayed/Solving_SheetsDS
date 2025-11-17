// Q2->6
// Queue.h
#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define Max 10
typedef int i;

typedef struct
{
    int front;
    int rear;
    int size;
    i arr[Max];
}queue;

void createQueue(queue *q);
int isQueueEmpty(queue q);
int isQueueFull(queue q);
void Enqueue(i value,queue *q);
i Dequeu(queue *q);
i lastElement(queue q);
i firstElement(queue q);
void DestroyQueue(queue *q);
void CopyQueue(queue *origin,queue *copy);
i SizeQueue(queue q);

#endif
