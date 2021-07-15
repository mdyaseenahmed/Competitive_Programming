#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val)
    {
        data = val;
        prev = next = NULL;
    }
};

void insert_front(Node* &head, int val)
{
    Node* p = new Node(val);
    if(head == NULL)
    {
        head = p;
        return ;
    }
    p->next = head;
    head->prev = p;
    head = p;
}

void display(Node* head)
{
    while(head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Node* head = NULL;

    insert_front(head,5);
    insert_front(head,15);
    display(head);                          // 15->5->NULL

    return 0;
}