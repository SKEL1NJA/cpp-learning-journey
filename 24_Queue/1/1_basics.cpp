#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10); // --> front
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50); // --> back/rear

    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl; // false
    q.pop();
    cout << q.front() << endl;
    cout << q.size() << endl;

    return 0;
}