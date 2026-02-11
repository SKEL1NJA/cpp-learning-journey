#include<iostream>
#include<vector>
#include<list>
#include<queue>
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

void bfs(Graph &g, int start){
    vector<bool> visited(g.V, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(int neighbour : g.adj[node]){
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
    cout << endl;
}

int main(){
    Graph g(7);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 5);
    g.addEdge(2, 5);
    g.addEdge(2, 3);
    g.addEdge(3, 6);
    g.addEdge(4, 6);

    bfs(g, 0);  // starting node

    return 0;
}