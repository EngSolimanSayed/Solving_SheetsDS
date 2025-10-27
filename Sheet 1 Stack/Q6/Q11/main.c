#include <stdio.h>
#include"stack.h"//implementation in Q6

int main()
{
    Stack s;
    create_stack(&s);
    stack_push('x', &s);
    stack_push('y', &s);
    stack_push('z', &s);
    stack_push('v', &s);

    printf("Last element is: %c\n", last_element(&s));

    return 0;
}