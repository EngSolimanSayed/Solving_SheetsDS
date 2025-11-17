#include <stdio.h>
#include "stack.h"
#include "queue.h"

int main() {
    Queue q, tempQ;
    Stack s;
    Customer c, tempCustomer;
    int choice;

    createQueue(&q);
    createStack(&s);

    do {
        printf("\n===== Car Workshop Menu =====\n");
        printf("1. Add a New Customer\n");
        printf("2. Serve a Customer\n");
        printf("3. Display Customers Information\n");
        printf("4. Display Customers in Most-Recent Order\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {

            case 1:
                printf("\nEnter Customer ID: ");
                scanf("%d", &c.id);
                getchar();
                printf("Enter Customer Name: ");
                fgets(c.name, 50, stdin);
                c.name[strcspn(c.name,"\n")] = 0;

                enqueue(c, &q);
                printf("Customer Added Successfully!\n");
                break;

            case 2:
                if (isQueueEmpty(q)) {
                    printf("\nNo customers to serve.\n");
                } else {
                    c = dequeue(&q);
                    printf("\nServing Customer:\n");
                    printf("ID: %d, Name: %s\n", c.id, c.name);
                }
                break;

            case 3:
                if (isQueueEmpty(q)) {
                    printf("\nNo customers waiting.\n");
                } else {
                    int idx = q.front;
                    printf("\n--- Customers in Queue ---\n");
                    for(int i=0; i<q.size; i++) {
                        Customer c = q.arr[idx];
                        printf("ID: %d, Name: %s\n", c.id, c.name);
                        idx = (idx + 1) % MAX;
                    }
                }
                break;

            case 4:
                createStack(&s);
                createQueue(&tempQ);

                while (!isQueueEmpty(q)) {
                    tempCustomer = dequeue(&q);
                    push(tempCustomer, &s);      
                    enqueue(tempCustomer, &tempQ);
                }

                printf("\n--- Customers (Most Recent First) ---\n");
                while(!isStackEmpty(s)) {
                    Customer c = pop(&s);
                    printf("ID: %d, Name: %s\n", c.id, c.name);
                }

                while (!isQueueEmpty(tempQ)) {
                    tempCustomer = dequeue(&tempQ);
                    enqueue(tempCustomer, &q);
                }

                break;

            case 5:
                printf("\nExiting Program...\n");
                break;

            default:
                printf("\nInvalid choice, try again.\n");
        }

    } while (choice != 5);

    return 0;
}
