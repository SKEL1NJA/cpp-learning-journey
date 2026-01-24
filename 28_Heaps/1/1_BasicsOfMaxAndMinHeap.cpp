#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq; // maxHeap (default)
    pq.push(21);
    pq.push(5);
    pq.push(104);
    pq.push(86);
    pq.push(12);
    cout << pq.top() << endl; // 104
    pq.pop();
    cout << pq.top() << endl; // 86

    priority_queue<int, vector<int>, greater<int>> min; // minHeap
    min.push(21);
    min.push(5);
    min.push(104);
    min.push(86);
    min.push(12);
    cout << min.top() << endl; // 5
    min.pop();
    cout << min.top() << endl; // 12
}