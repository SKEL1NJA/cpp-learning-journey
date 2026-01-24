#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;

    pair<string, int> p1;
    p1.first = "Parth";
    p1.second = 1;
    m.insert(p1);

    pair<string, int> p2;
    p2.first = "Uday";
    p2.second = 10;
    m.insert(p2);

    pair<string, int> p3;
    p3.first = "Siddharth";
    p3.second = 15;
    m.insert(p3);

    for(auto p : m)
        cout << p.first << " " << p.second << endl; // printing in random order

    cout << endl;

    // m[key] = value

    m["Yash"] = 23; // better way

    for(auto p : m)
        cout << p.first << " " << p.second << endl;

    cout << endl;

    m.erase("Siddharth");
    for(auto p : m)
        cout << p.first << " " << p.second << endl;
}