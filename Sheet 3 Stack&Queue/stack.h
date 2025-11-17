#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "global.h"

typedef struct {
    int top;
    Customer arr[MAX];
} Stack;

void createStack(Stack *s);
int isStackEmpty(Stack s);
int isStackFull(Stack s);
void push(Customer c, Stack *s);
Customer pop(Stack *s);
Customer peek(Stack s);

#endif
