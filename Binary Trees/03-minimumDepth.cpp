// 111. Minimum Depth of Binary Tree (LeetCode Problem)
// Given a binary tree, find its minimum depth. The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

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

int minDepth(Node* root)
{
    if(root == NULL)                                    // If tree is Empty.
        return 0;

    if(root->left == NULL && root->right == NULL)       // If root is the only node present in the Tree.
        return 1;

    int l = INT_MAX, r = INT_MAX;
    if(root->left)
        l = minDepth(root->left);

    if(root->right)
        r = minDepth(root->right);
    
    return 1+min(l,r);
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

    int minDep = minDepth(root);
    cout << "Minimum Depth is: " << minDep << endl;         // Minimum Depth is: 3

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

    minDep = minDepth(root1);                       
    cout << "Minimum Depth is: " << minDep << endl;                 // Minimum Depth is: 4

    struct Node* root2 = new Node(20);
    root2->left = new Node(10);
    root2->right = new Node(30);
    root2->left->left = new Node(5);
    root2->left->left->left = new Node(3);

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

    */

    minDep = minDepth(root2);                       
    cout << "Minimum Depth is: " << minDep << endl;               // Minimum Depth is: 2
    
    struct Node* root3 = new Node(1);
    
    /*
    
            ( 1 ) 
            /  \
          /     \
        NULL   NULL
        
    */
   
    minDep = minDepth(root3);                       
    cout << "Minimum Depth is: " << minDep << endl;             // Minimum Depth is: 1

    minDep = minDepth(NULL);                       
    cout << "Minimum Depth is: " << minDep << endl;             // Minimum Depth is: 0

    return 0;
}