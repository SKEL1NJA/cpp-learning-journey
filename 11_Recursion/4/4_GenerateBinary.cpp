#include<bits/stdc++.h>
using namespace std;

void binary(string s, int n){
    if(s.length()==n){
        cout << s << endl;
        return;
    }
    binary(s + "0", n);
    binary(s + "1", n);
}

int main(){
    int n;
    cout << "Enter length of string: ";
    cin >> n;

    binary("", n);
}