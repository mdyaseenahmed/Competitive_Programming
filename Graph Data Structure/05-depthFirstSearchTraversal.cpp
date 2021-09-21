/* Depth First Search traversal Of a Graph (Adjacency List). */
#include<bits/stdc++.h>

using namespace std;

// Time Complexity: O(V+E) where V is the Number of Nodes(Vertices) and E is the number of Edges.

class dfsOfGraph 
{
    void dfsHelper(int i, vector<bool>& visited, vector<int>& res, vector<int> adj[])
    {
        visited[i] = true;
        res.push_back(i);
        for(auto nbr: adj[i])
        {
            if(!visited[nbr])
                dfsHelper(nbr, visited, res, adj);
        }
    }

    public: 
    vector<int> dfs(int V, vector<int> adj[])
    {
        vector<bool> visited(V, false);
        vector<int> res;

        for(int i = 0; i < V; i++) 
        {
            if(!visited[i])
                dfsHelper(i, visited, res, adj);
        }
        return res;
    }

    void printVector(vector<int> arr)
    {
        for(auto i: arr)
            cout << i << " ";
        cout << endl;
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t;
    cin >> t ;
    while(t--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        
        for(int i = 0; i < E; i++)
        {
            int u ,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);            // Comment this line to make the Graph directed.
        }
        dfsOfGraph g;
        vector<int> dfsOrder = g.dfs(V, adj);
        g.printVector(dfsOrder);
    }

    /*
    
        Upon Executing the above code with the following,
        Input:  2                               // Number of test cases
                5 4                             // 5 Nodes(Vertices) & 4 Edges
                0 1                             // There is an Edge from Node 0 to Node 1
                0 2                             // There is an Edge from Node 0 to Node 2
                0 4                             // There is an Edge from Node 0 to Node 4
                3 4                             // There is an Edge from Node 4 to Node 3

                4 3                             // 4 Nodes(Vertices) & 3 Edges
                0 1                             // There is an Edge from Node 0 to Node 1
                1 2                             // There is an Edge from Node 1 to Node 2
                0 3                             // There is an Edge from Node 0 to Node 3

        We got the following,
        Output: 0 1 2 4 3                       // DFS Order Of 1st Graph
                0 1 2 3                         // DFS Order Of 2nd Graph

    */

    return 0;
}