#include<iostream>
#include<stack>
using namespace std;

void pushAtIndex(stack<int>& st, int index, int val){
    stack<int> helper;
    while(st.size()!=index){
        helper.push(st.top());
        st.pop();
    }

    st.push(val);

    while(helper.size()){
        st.push(helper.top());
        helper.pop();
    }
}

void print(stack<int>& st){
    stack<int> temp;
    while(st.size()){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()){
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(40);
    st.push(50);
    st.push(60);

    cout << "Original stack: ";
    print(st);

    pushAtIndex(st, 2, 30);

    cout << "Stack after pushing element: ";
    print(st);

    return 0;
}