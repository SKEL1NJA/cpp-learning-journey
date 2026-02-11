#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
public:
    int V;
    vector<list<int>> adj;

    Graph(int vertices){
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);    // remove for directed graph
    }

    void printGraph(){
        for (int i = 0; i < V;i++){
            cout << i << " -> ";
            for(int neighbour : adj[i]){
                cout << neighbour << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Graph g(7);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 5);
    g.addEdge(2, 5);
    g.addEdge(2, 3);
    g.addEdge(3, 6);
    g.addEdge(4, 6);

    g.printGraph();

    return 0;
}