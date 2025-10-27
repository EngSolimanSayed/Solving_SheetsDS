#include <stdio.h>
#include"Stack.h"

void print_stack(Stack s)
{
    printf("Stack contents: ");
    for (int i = 0; i < s.top; i++)
    {
        printf("%c \n ", s.arr_stack[i]);
        printf("\n");
    }
}
int main()
{
    Stack s;
    create_stack(&s);

    char choice;
    while (1)
    {
        printf("\nChoose an option:\n");
        printf("a) Push an element\n");
        printf("b) Pop an element\n");
        printf("c) Exit\n");
        printf("d) Display stack size\n");
        printf("e) Print stack contents\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == 'a')
        {
            char value;
            printf("Enter your value: ");
            scanf(" %c", &value);
            stack_push(value, &s);
        }
        else if (choice == 'b')
        {
            char value = stack_pop(&s);
            printf("Value is: %c\n", value);
        }
        else if (choice == 'd')
        {
            printf("Current stack size: %d\n", stack_size(s));
        }

        else if (choice == 'c')
        {
            break;
        }
        else if (choice == 'e')
        {
            print_stack(s);
        }

        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}