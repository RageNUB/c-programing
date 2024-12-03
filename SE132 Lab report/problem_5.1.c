#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(){
    int value;
    if(top == MAX_SIZE-1){
        printf("Stack is Full\n");
    } else {
        printf("Enter an integer: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed into stack.\n", value);
    }
}
void pop(){
    if(top == -1){
        printf("Stack is Empty\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}
void display(){
    if(top == -1){
        printf("Stack is Empty\n");
    } else {
        printf("Stack Elements: ");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    while (1)
    {
        printf("\nStack Operations:\n");
        printf("0. Exit\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("Enter your choice: ");
        int option;
        scanf("%d", &option);
        switch (option)
        {
            case 0:
                printf("Exiting\n");
                return 0;
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid Option\n");
                break;
        }
    }
    
    return 0;
}