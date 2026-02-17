#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Graph{
public:
    vector<vector<int>> adj;
    int v;

    Graph(int vertices){
        v = vertices;
        adj.resize(v);
    }

    void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printGraph(){
        for (int i = 0; i < v;i++){
            cout << i << " -> ";
            for(int neighbour : adj[i]){
                cout << neighbour << " ";
            }
            cout << endl;
        }
    }
};

void dfs(int node, unordered_set<int>& visited, Graph &g){
    visited.insert(node);
    for(auto neighbour : g.adj[node]){
       if(visited.find(neighbour) == visited.end()){
            dfs(neighbour, visited, g);
        } 
    }
}

int connected_component(Graph &g){
    int cnt = 0;
    unordered_set<int> visited;
    for (int i = 0; i < g.v;i++){
        // go to every vertex
        // if from a vertex we can initialise a dfs, we got one more cc
        if(visited.find(i) == visited.end()){
            cnt++;
            dfs(i, visited, g);
        }
    }
    return cnt;
}

int main(){
    Graph g(7);

    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(3, 4);

    g.addEdge(2, 5);
    g.addEdge(2, 6);
    g.addEdge(5, 6);

    cout << connected_component(g) << endl;

    return 0;
}