#include<iostream>
#include<set>
#include<map>
using namespace std;

int main(){
    set<int> st;
    st.insert(5);
    st.insert(3);
    st.insert(7);
    for(int x : st)
        cout << x << " ";
    cout << endl;

    map<string, int> mp;
    mp["uday"] = 10;
    mp["parth"] = 1;
    mp["siddharth"] = 15;
    for(auto x : mp)
        cout << x.first << " ";
    cout << endl;
    for(auto x : mp)
        cout << x.second << " ";
}