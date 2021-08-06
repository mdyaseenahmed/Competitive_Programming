#include<bits/stdc++.h>

using namespace std;

class Graph
{
    int V;                  // V: Stores the number of vertices or nodes.
    list<int> *l;           // *l: is the pointer to the array of lists.

    public:
    Graph(int V)            // Constructor 
    {
        this->V = V;
        l = new list<int>[V+1];
    }

    void addEdge(int x, int y)          
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printAdjacencyList()
    {
        for(int i = 0; i < V; i++)
        {
            cout << "Vertex " << i << " -> ";
            for(auto nbr:l[i])
            {
                cout << nbr << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(1, 2);
    
    /*
        The Above graph representation,

                    (1)
                    /|
                   / |
                  /  |
                 /   |        
                /    |
              (0)---(2)
                     |
                     |
                     |
                    (3) 
    */

    g.printAdjacencyList();

    /*
        Vertex 0 -> 1 2 
        Vertex 1 -> 0 2 
        Vertex 2 -> 0 3 1 
        Vertex 3 -> 2 
    */

    return 0;
}