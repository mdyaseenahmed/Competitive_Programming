// 144. Binary Tree Preorder Traversal (LeetCode Problem)
// Given the root of a binary tree, return the preorder traversal of its nodes' values.

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

vector<int> iterativePreorder(Node* root)
{
    vector<int> res;
    if(root == NULL)
        return res;
    stack<Node*> st;

    st.push(root);
    while (!st.empty())
    {
        Node* tempNode = st.top();
        st.pop();
        
        if(tempNode->right)
            st.push(tempNode->right);
        
        if(tempNode->left)
            st.push(tempNode->left);
        res.push_back(tempNode->data);
    }       
    return res;
}

void printVector(vector<int> vec)
{
    for(auto i:vec)
        cout << i << "\t";
    cout << "\n";
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
    
    vector<int> res;
    res = iterativePreorder(root);
    printVector(res);                                       // 6	3	1	5	9	7	11	

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

    res = iterativePreorder(root1);
    printVector(res);                                       // 20	10	5	3	
  
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

    res = iterativePreorder(root2);
    printVector(res);                                       // 20	10	5	3	2	30
    
    struct Node* root3 = new Node(0);
    
    /*
    
            ( 0 ) 
            /  \
          /     \
        NULL   NULL
        
    */

    res = iterativePreorder(root3);
    printVector(res);                                       // 0

    return 0;
}