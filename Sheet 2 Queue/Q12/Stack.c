#include <stdio.h>
#include "Stack.h"


void createStack(Stack *s) {
    s->top = -1;
}
int isStackEmpty(Stack s) {
    return s.top == -1;
}
int isStackFull(Stack s) {
    return s.top == MAX-1;
}
void push(Type c, Stack *s) {
    if (!isStackFull(*s)) {
        s->arr[++(s->top)] = c;
    } else {
        printf("Error: Stack is full\n");
    }
}
Type pop(Stack *s) {
    if (!isStackEmpty(*s)) {
        return s->arr[(s->top)--];
    } else {
        printf("Error: Stack is empty\n");
        return '\0'; // sentinel value
    }
}
Type peek(Stack s) {
    if (!isStackEmpty(s)) {
        return s.arr[s.top];
    } else {
        return '\0';
    }
}
