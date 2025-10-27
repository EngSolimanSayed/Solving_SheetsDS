#include <stdio.h>
#include"Stack.h"//implementation in Q9

int main()
{
    Stack s;
    create_stack(&s);

    stack_push('A', &s);
    stack_push('B', &s);
    stack_push('C', &s);

    printf("Current stack size: %d\n", stack_size(s));
    return 0;
}