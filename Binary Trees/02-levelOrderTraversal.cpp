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

vector<vector<int>> levelOrder(Node* root)
{
    vector<vector<int>> res;
    if(root == NULL)
        return res;
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n = q.size();
        vector<int> tempRes;
        for(int i = 0; i < n; i++)
        {
            Node* tempNode = q.front();
            q.pop();
            if(tempNode->left != NULL)
                q.push(tempNode->left);
            if(tempNode->right != NULL)
                q.push(tempNode->right);
            tempRes.push_back(tempNode->data);
        }
        res.push_back(tempRes);
    }
    return res;
}

int main(int argc, char const *argv[])
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

    vector<vector<int>> res;
    
    res = levelOrder(root);

    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << "\t";
        }
        cout << endl;
    }

    /*
            Upon Executing the Above code we got the following,
            
            Output:
                    6	
                    3	9	
                    1	5	7	11	

    */

    return 0;
}
