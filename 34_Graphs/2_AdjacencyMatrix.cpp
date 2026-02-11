#include<iostream>
#include<vector>
using namespace std;

class Graph{
public:
    int V;
    vector<vector<int>> adj;

    Graph(int vertices){
        V = vertices;
        adj.resize(V, vector<int>(V, 0));
    }

    void addEdge(int u, int v){
        adj[u][v] = 1;
        adj[v][u] = 1;    // remove for directed graph
    }

    void printGraph(){
        for (int i = 0; i < V;i++){
            for (int j = 0; j < V;j++){
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    Graph g(7);

    g.addEdge(0, 1);
    g.addEdge(0, 6);
    g.addEdge(1, 2);
    g.addEdge(1, 5);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(5, 6);

    g.printGraph();

    return 0;
}