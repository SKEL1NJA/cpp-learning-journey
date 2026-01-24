#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int>& q, int k){
    stack<int> st;
    int i = 1;
    while(!q.empty() && i<=k){
        st.push(q.front());
        q.pop();
        i++;
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    for (int i = 0; i < q.size() - k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
}

void display(queue<int>& q){
    int n = q.size();
    for (int i = 0; i < n; i++){
        cout << q.front() << " ";
        int x = q.front();
        q.pop();
        q.push(x);
    }
    cout << endl;
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    display(q);
    reverse(q, 3);
    display(q);

    return 0;
}