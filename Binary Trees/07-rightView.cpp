/* 
    Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side.
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

    // A Utility Function to Recursively find the rigth view of the Function
    vector<int> rightViewUtil(vector<int>& rightViewNodes, BSTNode* root, int level)
    {
        if(root == NULL)
            return rightViewNodes;

        if(rightViewNodes.size() == level)
            rightViewNodes.push_back(root->data);

        rightViewUtil(rightViewNodes, root->right, level+1);
        rightViewUtil(rightViewNodes, root->left, level+1);
        
        return rightViewNodes;
    }

    // Function which returns the Right View of the BST.
    vector<int> rightView(BSTNode* root)
    {
        vector<int> rightViewNodes;
        if(root == NULL)
            return rightViewNodes;
        else
        {
            rightViewNodes = rightViewUtil(rightViewNodes, root, 0);
            return rightViewNodes;
        }
    }

    // A Utility Function to Print the contents of a Vector.
    void printVector(vector<int> temp)
    {
        for(auto i:temp)
            cout << i << " ";
        cout << endl;
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
                       (1)   (3)   (7)   (12)
    */

    tree.inOrder(root);                     // 1 2 3 7 7 8 12 
    cout << endl;
    
    vector<int> rightViewOfBST;
    rightViewOfBST = tree.rightView(root);
    tree.printVector(rightViewOfBST);                // 7 8 12

    return 0;
}