// Graph Implementation Using Adjacency Matrix. 

#include<bits/stdc++.h>

using namespace std;

void breadthFirstSearch(int src, int V, vector<vector<int>> adjm)
{
    bool visited[V];
    memset(visited, 0, sizeof(visited));

    queue<int> q;

    q.push(src);
    visited[src] = true;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(int i = 1; i <= V; i++)
        {
            if(adjm[node][i] && !visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int V, E;               // V: Number of Nodes(Vertices) and E: Number of Edges.
    cin >> V >> E;
    // 7 7      (Means there are 7 Nodes & 7 Edges).

    vector<vector<int>> adjm(V+1, vector<int>(V+1,0));      // creating a 2D array with V+1 Nodes(Because we are naming the nodes from 1 to N)

    for(int i = 0; i < E; i++)
    {
        int x, y;               
        cin >> x >> y;          

        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }

    // 1 2      // It means that there is an edge between node 1 & 2 (It can from 1 to 2 or from 2 to 1 as it is an undirected graph) 
    // 1 3      // It means that there is an edge between node 1 & 3 (It can from 1 to 3 or from 3 to 1 as it is an undirected graph) 
    // 2 4 
    // 2 5 
    // 2 6
    // 2 7
    // 7 3

    /*  
                    (1)
                   /   \
                  /     \
                (2)-(7)-(3)
               / | \  
              /  |  \    
            (4) (5) (6)
    */

    cout << "Adjacency Matrix: \n" << endl;
    for(int i = 1; i <= V; i++)
    {
        for(int j = 1; j <= V; j++)
        {
            cout << adjm[i][j] << " ";
        }
        cout << endl;
    }
    // The above block of code will output the following,
    /*
            Adjacency Matrix: 

            0 1 1 0 0 0 0 
            1 0 0 1 1 1 1 
            1 0 0 0 0 0 1 
            0 1 0 0 0 0 0 
            0 1 0 0 0 0 0 
            0 1 0 0 0 0 0 
            0 1 1 0 0 0 0 
    */

    for(int i = 1; i <= V; i++)
    {
        for(int j = 1; j <= V; j++)
        {
            if(adjm[i][j] == 1)
            {
                cout << i << "=>" << j << " ";
            }
        }
        cout << endl;
    }
    // The above block of code will output the following,
    /*
            1=>2 1=>3                       // It means that there is an from vertex(node) 1 to 2 and there is an edge from node 1 to node 3 
            2=>1 2=>4 2=>5 2=>6 2=>7        // Similarly, there is an edge from node 2 to 1, 4, 5, 6 and node 7
            3=>1 3=>7 
            4=>2 
            5=>2 
            6=>2 
            7=>2 7=>3
    */

    breadthFirstSearch(6, V, adjm);
    
    return 0;
}