#include <stdio.h>
#include"Stack.h"//implementation in Q7
int main()
{
    Stack s;
    create_stack(&s);

    stack_push('A', &s);
    stack_push('B', &s);
    stack_push('C', &s);

    printf("Stack size before destroy: %d\n", stack_size(s));
    destroy_stack(&s);
    printf("Stack size after destroy: %d\n", stack_size(s));

    return 0;
}
