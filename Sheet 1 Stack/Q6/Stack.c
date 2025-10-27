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
stack_entry last_element(Stack *s)
{
    if (isstack_empty(*s))
    {
        printf("Error: Stack is empty\n");
        return '\0';
    }
    else
    {
        return s->arr_stack[s->top];
    }
}