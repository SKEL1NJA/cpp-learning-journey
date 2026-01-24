#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    int stock[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(stock) / sizeof(stock[0]);
    int pgIdx[n];
    pgIdx[0] = -1;

    stack<int> st;
    st.push(0);
    for (int i = 1; i < n;i++){
        while(!st.empty() && stock[st.top()]<stock[i])
            st.pop();
        if(st.empty())
            pgIdx[i] = -1;
        else
            pgIdx[i] = st.top();
        st.push(i);
    }

    int i = 0;
    while(i<n){
        if(pgIdx[i]==-1)
            pgIdx[i] = 1;
        else{
            pgIdx[i] = i - pgIdx[i];
        }
        i++;
    }

    for(int nums:pgIdx)
        cout << nums << " ";
    cout << endl;
}