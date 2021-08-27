#include<bits/stdc++.h>

using namespace std;

// Node definition of the tree.
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Recursive PreOrder Traversal
void preOrder(Node* root)
{
    if(root == NULL)
        return ;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Recursive PostOrder Traversal
void postOrder(Node* root)
{
    if(root == NULL)
        return ;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// Recursive InOrder Traversal
void inOrder(Node* root)
{
    if(root == NULL)
        return ;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    struct Node* root = new Node(10);       // creating the root node
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(6);
    root->right->left = new Node(12);
    root->right->right = new Node(17);
    cout << "Pre Order: ";
    preOrder(root);                         // Pre Order: 10 5 3 6 15 12 17 
    cout << "\nPost Order: ";
    postOrder(root);                        // Post Order: 3 6 5 12 17 15 10 
    cout << "\nIn Order : ";
    inOrder(root);                          // In Order : 3 5 6 10 12 15 17 

    return 0;
}