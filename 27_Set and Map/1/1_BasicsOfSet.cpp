#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    cout << s.size() << endl;
    for(int ele: s)
        cout << ele << " ";
    cout << endl;

    s.erase(3);
    cout << s.size() << endl;
    for(int ele: s)
        cout << ele << " ";
    cout << endl;

    if(s.find(2) != s.end())
        cout << "element found" << endl;
    else
        cout << "Element not found" << endl;
}