/*
    Leetcode 226: Given the root of a binary tree, invert the tree, and return its root. (https://leetcode.com/problems/invert-binary-tree/)
    GeeksforGeeks: Convert a Binary Tree into its Mirror Tree. (https://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/)
*/

/* 
    Problem Statement: Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side.
    Link: https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#

*/ 
#include<bits/stdc++.h>

using namespace std;

class BSTNode 
{
    public:
    int data;
    BSTNode* left;
    BSTNode* right;

    // Binary Search Tree Insertion
    BSTNode* insert(BSTNode* root, int data)
    {
        if(root == NULL) 
        {
            root = new BSTNode;
            root->data = data;
            root->left = NULL;  
            root->right = NULL;
        }
        else if(root->data > data)
        {
            root->left = insert(root->left, data);
        }
        else
        {
            root->right = insert(root->right, data);
        }
        return root;
    }

    // Recursive In Order Traversal
    void inOrder(BSTNode* root)
    {
        if(root == NULL)
            return ;
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    BSTNode* invertTree(BSTNode* root)
    {
        if(root == NULL)
            return root;
        
        invertTree(root->left);
        invertTree(root->right);

        BSTNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        return root;
    }
};

#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    BSTNode tree;                           // Creating an object of the BSTNode class 
    BSTNode* root = NULL;                   // Creating an empty BST tree.
    root = tree.insert(root, 7);
    root = tree.insert(root, 2);
    root = tree.insert(root, 3);
    root = tree.insert(root, 8);
    root = tree.insert(root, 12);
    root = tree.insert(root, 1);
    root = tree.insert(root, 7);

    /*
    
                              ( 7 ) 
                              /   \                          
                            /       \
                          (2)        (8)
                         /   \       /  \
                       (1)   (3)   (7)  (12)
    */

    tree.inOrder(root);                     // 1 2 3 7 7 8 12 
    cout << endl;
    
    root = tree.invertTree(root);

    /*
    
        After Inverting the tree looks,

                              ( 7 ) 
                              /   \                          
                            /       \
                          (8)        (2)
                         /   \       /  \
                      (12)   (7)   (3)  (1)                        
    
    */    

    tree.inOrder(root);                     // 12 8 7 7 3 2 1

    return 0;
}