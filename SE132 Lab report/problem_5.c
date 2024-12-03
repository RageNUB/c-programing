#include <stdio.h>
#define MAX_SIZE 100

typedef struct
{
    int data[MAX_SIZE];
    int top;
} Stack;

void push(Stack *stack){
    int value;
    if(stack->top == MAX_SIZE-1){
        printf("Stack is Full\n");
    } else {
        printf("Enter an integer: ");
        scanf("%d", &value);
        stack->top++;
        stack->data[stack->top] = value;
        printf("%d pushed into stack.\n", value);
    }
}
void pop(Stack *stack){
    if(stack->top == -1){
        printf("Stack is Empty\n");
    } else {
        printf("%d popped from stack\n", stack->data[stack->top]);
        stack->top--;
    }
}
void display(Stack *stack){
    if(stack->top == -1){
        printf("Stack is Empty\n");
    } else {
        printf("Stack Elements: ");
        for (int i = 0; i <= stack->top; i++)
        {
            printf("%d ", stack->data[i]);
        }
        printf("\n");
    }
}

int main()
{
    Stack stack;
    stack.top = -1;

    int choice = 1;
    while (choice)
    {
        printf("\nStack Operations:\n");
        printf("0. Exit\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 0:
                printf("Exiting\n");
                break;
            case 1:
                push(&stack);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                display(&stack);
                break;
            default:
                printf("Invalid Choice\n");
                break;
        }
    }
    
    return 0;
}