#include<bits/stdc++.h>

using namespace std;

class Graph
{
    map<int, list<int>> l;

    public:
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        // l[y].push_back(x);
    }

    void breadthFirstSearch(int src)
    {
        bool visited[10000];
        queue<int> q;


        q.push(src);
        visited[src] = true;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            cout << node << ", ";
            for(auto nbr:l[node])
            {
                if(!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }

};

int main()
{
    #ifndef ONLINE_JUDGE 
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.breadthFirstSearch(1);

    return 0;
}