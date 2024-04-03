#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_position(Node *&head,int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=0;i<pos-1;i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void print_lineked_list(Node *head)
{
    Node *tmp = head;
    cout<<"L -> ";
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_lineked_list_reverse(Node *tail)
{
    Node *tmp = tail;
    cout<<"R -> ";
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int query;
    cin>>query;
    for(int i=0;i<query;i++)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos > size(head))
        {
            cout<<"Invalid"<<endl;
        }
        else if(pos == 0)
        {
            insert_head(head, tail, val);
            print_lineked_list(head);
            print_lineked_list_reverse(tail);
        }
        else if(pos == size(head))
        {
            insert_tail(head, tail, val);
            print_lineked_list(head);
            print_lineked_list_reverse(tail);
        }
        else 
        {
            insert_position(head, pos, val);
            print_lineked_list(head);
            print_lineked_list_reverse(tail);
        }
    }

    return 0;
}