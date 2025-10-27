#include <stdio.h>
#include "Stack.h"
void create_stack(Stack *s)
{
    s->top = -1;
}
int isstack_empty(Stack s)
{
    return s.top == -1;
}
int isstack_full(Stack s)
{
    return s.top == MAX_SIZE - 1;
}
void stack_push(stack_entry e, Stack *s)
{
    if (isstack_full(*s))

    {
        printf("Error:Stack is full.\n");
    }
    else
    {
        s->arr_stack[++(s->top)] = e;
    }
}
stack_entry stack_pop(Stack *s)
{
    if (isstack_empty(*s))
    {
        printf("Error:Stack is empty.\n");
        return -1;
    }
    else
    {
        return s->arr_stack[(s->top)--];
    }
}
void stack_copy(Stack *source, Stack *copy)
{
    Stack temp;
    create_stack(&temp);

    while(!isstack_empty(*source))
    {
        stack_entry e = stack_pop(source);
        stack_push(e, &temp);
    }

    
    while(!isstack_empty(temp))
    {
        stack_entry e = stack_pop(&temp);
        stack_push(e, source);  
        stack_push(e, copy);    
    }
}
