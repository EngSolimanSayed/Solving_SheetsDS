#include <stdio.h>
#include"Stack.h"//implementation in Q1
int main()
{
    Stack s;
    create_stack(&s);
    char choice;
    while(1)
    {
        printf("\nChoose an option:\n");
        printf("a) Push an element\n");
        printf("b) Pop an element\n");
        printf("c) Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == 'a')
        {
            char choice1;
            printf("Enter your value: ");
            scanf(" %c", &choice1);
            stack_push(choice1, &s);
        }
        else if (choice == 'b')
        {
        
            char value = stack_pop(&s);
            printf("value is: %c\n ", value);
        }
        else if (choice == 'c')
        {
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}