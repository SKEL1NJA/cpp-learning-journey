#include<iostream>
#include<stack>
using namespace std;

void printRecRev(stack<int>& st){
    if(st.size()==0)
        return;
    cout << st.top() << " ";
    int x = st.top();
    st.pop();
    printRecRev(st);
    st.push(x);
}

void printRec(stack<int>& st){
    if(st.size()==0)
        return;
    int x = st.top();
    st.pop();
    printRec(st);
    cout << x << " ";
    st.push(x);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(50);
    st.push(60);

    printRecRev(st);
    cout << endl;
    printRec(st);

    return 0;
}