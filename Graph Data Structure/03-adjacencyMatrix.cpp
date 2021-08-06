#include<bits/stdc++.h>

using namespace std;

class Graph
{
    map<string, list<pair<string, int>>> l;

    public:
    void addEdge(string x, string y, int w, bool isBidirectional)               // x: Source Node, y: Destination Node, w: Weight
    {
        l[x].push_back(make_pair(y, w));                // Creating or making a pair from source node x to destination node y with weight w & pushing it on to the list. 
        if(isBidirectional)                             // Checks whether it is a Bidirectional edge
            l[y].push_back(make_pair(x, w));            // Creating or making a pair from source node y to destination node x with weight w & pushing it on to the list.
    }

    void printAdjacencyList()
    {
        for(auto p:l)                                   // Here, we are iterating over all the nodes.
        {
            string node = p.first;                      // p will give a string and a list(which is a pair of string and int)        
            list<pair<string,int>> nbrs = p.second;
            cout << "Vertex " << node << " : ";
            for(auto nbr:nbrs)                          // Here, we are iterating over the list(which is a pair of string and int) contents 
            {
                string dest = nbr.first;                // nbr.first will give us the destination & nbr.second will give the distance or cost to reach to the destination from node
                int distance = nbr.second;

                cout << dest << " " << distance << ",";
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

    Graph g;
    g.addEdge("A", "B", 20, true);
    g.addEdge("A", "C", 10, true);
    g.addEdge("A", "D", 50, false);
    g.addEdge("B", "D", 30, true);
    g.addEdge("C", "D", 40, true);

    g.printAdjacencyList();

    /*
        Upon Executing the above code we got the following, 

        Vertex C : A 10,D 40,
        Vertex D : B 30,C 40,
        Vertex A : B 20,C 10,D 50,
        Vertex B : A 20,D 30,  
    */

    return 0;
}