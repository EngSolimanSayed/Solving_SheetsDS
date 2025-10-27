#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX_SIZE 10
typedef char stack_entry;
typedef struct
{
   stack_entry arr_stack[MAX_SIZE];
   int top;

}Stack;

//prototypes
void create_stack(Stack *s);
int isstack_empty(Stack s);
int isstack_full(Stack s);
void stack_push(stack_entry e,Stack *s);
stack_entry stack_pop(Stack *s);
int  stack_size(Stack s);
stack_entry first_element(Stack *s);

#endif