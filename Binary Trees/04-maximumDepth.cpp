// 104. Maximum Depth of Binary Tree (LeetCode Problem)
// Given the root of a binary tree, return its maximum depth. A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int maxDepth(Node* root)
{
    if(root == NULL)                                    // If tree is Empty.
        return 0;

    if(root->left == NULL && root->right == NULL)       // If root is the only node present in the Tree.
        return 1;

    int l = INT_MIN, r = INT_MIN;

    if(root->left)
        l = maxDepth(root->left);

    if(root->right)
        r = maxDepth(root->right);
    
    return 1+max(l,r);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    struct Node* root = new Node(6);
    
    /*
    
                         ( 6 )
                         /  \
                       /     \
                    NULL    NULL
    
    */

    root->left = new Node(3);

    /*

                         ( 6 )
                         /  \
                       /     \
                    ( 3 )    NULL
                    /  \
                  /     \
                NULL    NULL
    
    */

    root->right = new Node(9);

    /*
    
                         ( 6 )
                        /    \
                      /       \
                  ( 3 )       ( 9 )
                  /  \        /   \        
                /     \      /     \
              NULL   NULL  NULL   NULL
    
    */

    root->left->left = new Node(1);

    /*
    
                                 ( 6 )
                                /    \
                              /       \
                          ( 3 )       ( 9 )
                          /  \        /   \        
                        /     \      /     \
                     ( 1 )   NULL  NULL   NULL        
                    /   \
                   /     \
                 NULL   NULL


    */

    root->left->right = new Node(5);

    /*
    
                                 ( 6 )
                                /    \
                              /       \
                          ( 3 )       ( 9 )
                          /  \        /   \        
                        /     \      /     \
                     ( 1 )   ( 5 ) NULL   NULL        
                    /   \     / \
                   /     \  /    \
                 NULL   NULL    NULL

    */

    root->right->left = new Node(7);

    /*
    
                                 ( 6 )
                                /     \
                              /        \
                          ( 3 )        ( 9 )
                          /  \         /   \        
                        /     \       /     \
                     ( 1 )   ( 5 )  ( 7 )   NULL        
                    /   \     / \    / \
                   /     \  /    \  /   \
                 NULL    NULL    NULL  NULL

    */

    root->right->right = new Node(11);

    /*
    
                                 ( 6 )
                                /     \
                              /        \
                          ( 3 )        ( 9 )
                          /  \         /   \        
                        /     \       /     \
                     ( 1 )   ( 5 )  ( 7 )  ( 11 )       
                    /   \     / \    / \    /  \
                   /     \  /    \  /   \  /    \
                 NULL    NULL    NULL   NULL  NULL

    */

    int maxDep = maxDepth(root);
    cout << "Maximum Depth is: " << maxDep << endl;         // Maximum Depth is: 3

    struct Node* root1 = new Node(20);
    root1->left = new Node(10);
    root1->left->left = new Node(5);
    root1->left->left->left = new Node(3);

    /*
    
                     (20)
                     / \
                   /    \
                (10)   NULL
                / \
              /    \
            (5)   NULL
           / \
          /  \
        (3) NULL

    */

    maxDep = maxDepth(root1);                       
    cout << "Maximum Depth is: " << maxDep << endl;                 // Maximum Depth is: 4

    struct Node* root2 = new Node(20);
    root2->left = new Node(10);
    root2->right = new Node(30);
    root2->left->left = new Node(5);
    root2->left->left->left = new Node(3);
    root2->left->left->left->left = new Node(2);

    /*
    
                     ( 20 )
                     /   \
                   /      \
                (10)     (30)
                / \       / \
              /    \    /    \
            (5)  NULL NULL  NULL
           / \
          /  \
        (3) NULL
        / \
       /  \
     (2) NULL

    */

    maxDep = maxDepth(root2);                       
    cout << "Maximum Depth is: " << maxDep << endl;               // Maximum Depth is: 5

    struct Node* root3 = new Node(0);
    
    /*
    
            ( 0 ) 
            /  \
          /     \
        NULL   NULL

    */
    
    maxDep = maxDepth(root3);                       
    cout << "Maximum Depth is: " << maxDep << endl;               // Maximum Depth is: 1

    maxDep = maxDepth(NULL);                       
    cout << "Maximum Depth is: " << maxDep << endl;               // Maximum Depth is: 0


    return 0;
}