#include<bits/stdc++.h>
using namespace std;

void binary(string s, int n){
    if(s.length()==n){
        cout << s << endl;
        return;
    }
    binary(s + "0", n); // Always
    if(s[s.length()-1] != '1')
        binary(s + "1", n);
}

int main(){
    int n;
    cout << "Enter length of string: ";
    cin >> n;

    binary("", n);
}