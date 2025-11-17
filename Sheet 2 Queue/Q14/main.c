#include <stdio.h>
#include "Stack.h"

int main()
{
    Stack groupStack, sectionStack, groupCodeStack;
    createStack(&groupStack);
    createStack(&sectionStack);
    createStack(&groupCodeStack);

    push(21, &groupStack);
    push(35, &groupStack);
    push(42, &groupStack);

    while (!isStackEmpty(groupStack))
    {
        int group_id = pop(&groupStack);
        int section_code = group_id / 10;
        int group_code = group_id % 10;

        push(section_code, &sectionStack);
        push(group_code, &groupCodeStack);
    }

    printf("Section codes stack: ");
    while (!isStackEmpty(sectionStack))
        printf("%d ", pop(&sectionStack));
    printf("\n");

    printf("Group codes stack: ");
    while (!isStackEmpty(groupCodeStack))
        printf("%d ", pop(&groupCodeStack));
    printf("\n");

    return 0;
}
