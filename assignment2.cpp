#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void reverse_linkedList(Node *&head,Node *current)
{
    if(current->next == NULL)
    {
        head = current;
        return;
    }
    reverse_linkedList(head, current->next);
    current->next->next = current;
    current->next = NULL;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }

    Node *newHead = NULL;
    Node *newTail = NULL;
    Node *tmp = head;
    while(tmp != NULL)
    {
        insert_tail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }
    reverse_linkedList(newHead, newHead);
    
    bool flag = true;
    tmp = head;
    Node *tmp2 = newHead;
    while(tmp != NULL)
    {
        if(tmp->val != tmp2->val)
        {
            flag = false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }

    if(flag) cout<<"YES";
    else cout<<"NO";

    return 0;
}