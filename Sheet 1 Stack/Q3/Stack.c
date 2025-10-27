//Stack.c
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
int  stack_size(Stack s)
{
    // Precondition: The stack must be created and properly initialized using create_stack().
    // Postcondition: The function returns the current number of elements in the stack.
    return s.top+1;
}