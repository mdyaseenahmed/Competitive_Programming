#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

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

void makeCycle(Node* &head)
{
    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = head->next->next;
}

bool detectCycle(Node* head)
{
    if(head == NULL)
        return false;
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if(slow == fast)
            return true;
    }
    return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Node* head = NULL;
    insert_end(head, 10);
    insert_end(head, 15);
    insert_end(head, 20);
    insert_end(head, 25);
    insert_end(head, 30);
    display(head);
    // makeCycle(head);                     // Make the pointer of last Node i.e., 30 to point to the 2nd Node i.e., 15
    // display(head);                       // When the above line is Uncommented & display() function is called program will enter into infinite loop & keeps on printing the list contents from 2nd Node to 5th Node. 
    cout << detectCycle(head);              // 1
    return 0;
}