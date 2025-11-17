//Q7->Q11
#include <stdio.h>
#include "Queue.h"
int main()
{
    queue q, q2;
    int value;
    createQueue(&q);

    Enqueue(10, &q);
    Enqueue(20, &q);
    Enqueue(30, &q);
    Enqueue(40, &q);
    Enqueue(50, &q);

    // ============ User Level #7: Get Last Element ============
    if (!isQueueEmpty(q))
    {
        value = lastElement(q);
        printf("Last element : %d\n", value);
    }
    // ============ User Level #8: Get First Element ============
    if (!isQueueEmpty(q))
    {
        value = firstElement(q);
        printf("first element : %d\n", value);
        // ============ User Level #11: Get Queue Size ============
        printf("Size of Queue is :%d\n ", SizeQueue(q));
        // ============ User Level #10: Copy Queue ============
        CopyQueue(&q, &q2);
        printf("The size of the copied queue:%d\n", SizeQueue(q2));
        // ============ User Level #9: Destroy Queue ============
        DestroyQueue(&q2);
        printf("After destroying copied queue, size = %d\n",SizeQueue(q2));
    }
}