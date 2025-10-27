#include <stdio.h>
#include"Stack.h"//implementation in Q8
int main()
{
    Stack s1, s2;
    create_stack(&s1);
    create_stack(&s2);
    stack_push('A', &s1);
    stack_push('B', &s1);
    stack_push('C', &s1);

   stack_copy(&s1, &s2);
    printf("Stack copied to s2.\n");

    return 0;
}