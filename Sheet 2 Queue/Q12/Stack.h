
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX 100
typedef char Type;

typedef struct {
    int top;
    Type arr[MAX];
} Stack;


void createStack(Stack *s);
int isStackEmpty(Stack s);
int isStackFull(Stack s);
void push(Type c, Stack *s);
Type pop(Stack *s);
Type peek(Stack s);

#endif 
