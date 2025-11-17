#include "stack.h"
#include<stdio.h>

void createStack(Stack *s) {
    s->top = -1;
}

int isStackEmpty(Stack s) {
    return s.top == -1;
}

int isStackFull(Stack s) {
    return s.top == MAX-1;
}

void push(Customer c, Stack *s) {
    if (!isStackFull(*s)) s->arr[++(s->top)] = c;
}

Customer pop(Stack *s) {
    if (!isStackEmpty(*s)) return s->arr[(s->top)--];
    Customer empty = {"", -1};
    return empty;
}

Customer peek(Stack s) {
    if (!isStackEmpty(s)) return s.arr[s.top];
    Customer empty = {"", -1};
    return empty;
}
