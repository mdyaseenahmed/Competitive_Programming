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

    void inOrder(BSTNode* root)
    {
        if(root == NULL)
            return ;
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    vector<int> leftViewUtil(vector<int>& leftViewNodes, BSTNode* root, int level)
    {
        if(root == NULL)
            return leftViewNodes;

        if(leftViewNodes.size() == level)
            leftViewNodes.push_back(root->data);

        leftViewUtil(leftViewNodes, root->left, level+1);
        leftViewUtil(leftViewNodes, root->right, level+1);
        
        return leftViewNodes;
    }

    vector<int> leftView(BSTNode* root)
    {
        vector<int> leftViewNodes;
        if(root == NULL)
            return leftViewNodes;
        else
        {
            leftViewNodes = leftViewUtil(leftViewNodes, root, 0);
            return leftViewNodes;
        }
    }

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

    BSTNode tree; 
    BSTNode* root = NULL;
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
    
    vector<int> leftViewOfBST;
    leftViewOfBST = tree.leftView(root);
    tree.printVector(leftViewOfBST);                // 7 2 1

    return 0;
}