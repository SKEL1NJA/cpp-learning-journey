#include<bits/stdc++.h>
using namespace std;

int minimumCost(vector<int>& ropes){
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int x : ropes)
        pq.push(x);
    int cost = 0;
    while(pq.size()>1){
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        cost += (x+y);
        pq.push(x+y);
    }
    return cost;
}

int main(){
    vector<int> ropes = {2, 7, 4, 1, 8};
    int cost = minimumCost(ropes);
    cout << cost << endl;
}
