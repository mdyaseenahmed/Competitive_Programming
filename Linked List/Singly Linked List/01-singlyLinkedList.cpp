#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert_front(Node* &head, int item)
{
    Node* p = new Node(item);

    if(head == NULL)
    {
        head = p;
        return ;
    }
    p->next = head;
    head = p;
}

void insert_end(Node* &head, int item)
{

    Node* p = new Node(item);
    
    if(head == NULL)
    {
        head = p;
        return ;    
    }
    
    Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;
        
    temp->next = p;
}

void insert_pos(Node* &head, int item, int pos)
{
    Node* p = new Node(item);
    Node* curr = head;
    Node* prev = NULL;
    int count = 1;

    if(curr == NULL && pos == 1)
    {
        head = p;
        return;
    }
    if(curr == NULL && pos != 1)
    {
        return;
    }
    if(pos == 1)
    {
        p->next = head;
        head = p;
        return ;
    }
    while(curr != NULL && count != pos)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if(count == pos)
    {
        prev->next = p;
        p->next = curr;
        return;
    }
    else
    {
        return;
    }
}

bool search(Node* head, int key)
{
    if(head == NULL)
        return false;

    Node* temp = head;
    
    while(temp != NULL)
    {
        if(temp->data == key)
            return true;
        temp = temp->next;
    }
    return false;
}

void delete_front(Node* &head)
{
    if(head == NULL)
    {
        return ;
    }
    Node* p = head;
    head = head->next;
    delete p;
}

void delete_end(Node* &head)
{
    if(head == NULL)
    {
        return ;
    }
    Node* prev;
    Node* curr = head;
    if(curr->next == NULL)
    {
        delete head;
        return ;
    }
    while(curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    delete curr;
    return ;
}

void delete_pos(Node* &head, int pos)
{
    if(head == NULL)
    {
        return ;
    }
    if(head->next == NULL && pos == 1)
    {
        delete head;
        return ;
    }
    if(head->next != NULL && pos == 1)
    {
        Node* p = head;
        head = head->next;
        delete p;
        return ;
    }
    if(head->next == NULL && pos != 1)
    {
        return ;
    }
    Node* prev;
    Node* curr = head;
    int count = 1;
    while(curr->next != NULL && pos != count)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if(count == pos)
    {
        prev->next = curr->next;
        delete curr;
        return ;
    }
    else
    {
        return ;
    }
}

void delete_val(Node* &head, int val)
{
    if(head == NULL)
    {
        return ;
    }
    if(head->next == NULL && val == head->data)
    {
        delete head;
        return ;
    }
    if(head->next == NULL && val != head->data)
    {
        return ;
    }
    if(head->next != NULL && val == head->data)
    {
        Node* p = head;
        head = head->next;
        delete p;
        return ;
    }
    Node* prev;
    Node* curr = head;
    while(curr->next != NULL && curr->data != val)
    {
        prev = curr;
        curr = curr->next;
    }
    if(curr->data == val)
    {
        prev->next = curr->next;
        delete curr;
        return ;
    }
    else
    {
        return ;
    }
}

void reverse_SLL(Node* &head)
{
    if(head == NULL || head->next == NULL)
        return ;
    Node* prev = NULL;
    Node* curr = head;
    Node* nextn;

    while(curr!=NULL)
    {
        nextn = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextn;
    }
    head = prev;
}

Node* reverseRecursive(Node* head)
{
    if(head == NULL || head->next == NULL)
        return head;
    Node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

Node* concatenate(Node* head1, Node* head2)
{
    if(head1 == NULL)
        return head2;
    
    if(head2 == NULL)
        return head1;

    Node* temp = head1;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = head2;
    return head1;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Node* head = NULL;
    Node* head1 = NULL;
    Node* head3 = NULL;

    cout << "Linked List - 01:" << endl;    // Linked List - 01:
    delete_front(head);  
    cout << search(head, 100) << endl;  // 0
    display(head);                      // NULL 
    insert_pos(head, 8, 1); 
    display(head);                      // 8->NULL
    insert_end(head, 15);
    insert_end(head, 20);
    delete_end(head);
    display(head);                      // 8->15->NULL
    insert_front(head, 10);
    insert_front(head, 5);
    insert_pos(head, 12, 3);    
    insert_end(head, 20);
    display(head);                      // 5->10->12->8->15->20->NULL
    delete_front(head);
    delete_end(head);
    display(head);                      // 10->12->8->15->NULL
    cout << search(head, 12) << endl;   // 1
    cout << search(head, 100) << endl;  // 0
    delete_end(head);
    display(head);                      // 10->12->8->NULL
    insert_pos(head, 15, 4);
    insert_end(head, 18);
    insert_pos(head, 16, 5);
    display(head);                      // 10->12->8->15->16->18->NULL
    delete_pos(head, 4);
    display(head);                      // 10->12->8->16->18->NULL
    delete_pos(head, 1);
    display(head);                      // 12->8->15->16->18->NULL
    delete_pos(head, 4);
    display(head);                      // 12->8->16->NULL
    delete_val(head, 8);
    display(head);                      // 12->16->NULL
    reverse_SLL(head);
    display(head);                      // 16->12->NULL

    cout << "\nLinked List - 02:" << endl;
    insert_front(head1, 105);
    insert_front(head1, 100);
    insert_pos(head1, 50, 1);
    display(head1);                     // 50->100->105->NULL
    display(head);                      // 16->12->NULL
    head3 = concatenate(head, head1);
    display(head3);                     // 16->12->50->100->105->NULL
    head3 = reverseRecursive(head3);
    display(head3);                     // 105->100->50->12->16->NULL
    
    return 0;
}