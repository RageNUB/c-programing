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
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void get_middle(Node *head)
{
    Node *tmp = head;
    int middle = size(head) / 2;
    int test = 0;
    if(size(head)%2!=0)
    {
        while(test < middle)
        {
            tmp = tmp->next;
            test++;
        }
        cout<<tmp->val;
    }
    else 
    {
        while(test < middle-1)
        {
            tmp = tmp->next;
            test++;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }
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

    for(Node *i=head;i->next!=NULL;i=i->next)
    {
        for(Node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }

    // print_linekd_list(head);
    // get_middle(head);
    return 0;
}