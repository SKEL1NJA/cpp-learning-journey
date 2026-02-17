#include<iostream>
#include<vector>
#include<unordered_set>
#include<queue>
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

void bfs(int start, unordered_set<int>& visited, Graph &g){
    queue<int> q;
    q.push(start);
    visited.insert(start);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto &neighbour : g.adj[node]){
            if(visited.find(neighbour) == visited.end()){
                visited.insert(neighbour);
                q.push(neighbour);
            }
        }
    }
}

int connected_component(Graph &g){
    int cnt = 0;
    unordered_set<int> visited;
    for (int i = 0; i < g.v;i++){
        if(visited.find(i) == visited.end()){
            cnt++;
            bfs(i, visited, g);
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