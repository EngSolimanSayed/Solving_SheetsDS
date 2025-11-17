#include <stdio.h>
#include "Stack.h"
#include <string.h>

int isBalanced(char expr[])
{
    Stack s;
    createStack(&s);

    for (int i = 0; expr[i] != '\0'; i++)
    {
        char c = expr[i];

        // Opening brackets -> push
        if (c == '(' || c == '{' || c == '[')
        {
            push(c, &s);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (isStackEmpty(s))
                return 0;
            char top = pop(&s);
            if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '['))
                return 0; // mismatch
        }
    }

    return isStackEmpty(s);
}

int main()
{
    char expr[MAX];
    printf("Enter expression: ");
    scanf("%s", expr);

    if (isBalanced(expr))
        printf("Expression is balanced.\n");
    else
        printf("Expression is NOT balanced.\n");

    return 0;
}
