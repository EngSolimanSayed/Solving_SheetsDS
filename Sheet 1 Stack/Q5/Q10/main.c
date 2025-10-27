#include <stdio.h>
#include"Stack.h"//implementation in Q5
int main()
{
    Stack s;
    create_stack(&s);
    stack_push('a', &s);
    stack_push('b', &s);
    stack_push('c', &s);

    char first = first_element(&s);
    printf("First element in the stack is: %c\n", first);

    return 0;
}
