#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    cout << st.size() << endl; // 0

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << st.size() << endl; // 5

    st.pop(); // 50 is out
    cout << st.size() << endl; // 4

    cout << st.top() << endl; // 40

    // printing elements in reverse order
    stack<int> temp;
    while(st.size()){
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    cout << endl;

    // printing elements
    while(temp.size()){
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;

    return 0;
}