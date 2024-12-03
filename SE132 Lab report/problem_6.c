#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node Node;

Node* createNode(int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void createList(Node **head,int data){
    Node *newNode = createNode(data);
    if(*head == NULL){
        *head = newNode;
    } else {
        Node *tmp = *head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}
void displayList(Node* head){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    Node *tmp = head;
    printf("Linked List: ");
    while (tmp != NULL)
    {
        printf("%d->", tmp->data);
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    int data = 0;
    printf("Enter integers (-1 for exit):\n");
    while (data != -1)
    {
        scanf("%d", &data);
        if(data != -1) createList(&head, data);
    }
    displayList(head);
    return 0;
}