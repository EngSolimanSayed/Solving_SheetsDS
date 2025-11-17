#include <stdio.h>
#include "Queue.h" 

int main()
{
    queue q1, q2, qMerged;
    createQueue(&q1);
    createQueue(&q2);
    createQueue(&qMerged);

    
    Enqueue(2, &q1); 
    Enqueue(3, &q1); 

    
    Enqueue(1, &q2); 
    Enqueue(5, &q2); 

    
    while (!isQueueEmpty(q1) && !isQueueEmpty(q2))
    {
        int section = Dequeu(&q1);
        int group = Dequeu(&q2);
        int merged = section * 10 + group;
        Enqueue(merged, &qMerged);
    }


    printf("Merged Queue: ");
    while (!isQueueEmpty(qMerged))
    {
        int val = Dequeu(&qMerged);
        printf("%d ", val);
    }
    printf("\n");

    return 0;
}
