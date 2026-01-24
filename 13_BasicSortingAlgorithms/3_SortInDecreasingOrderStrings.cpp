// Sort a string in decreasing order of values associated after removal of values smaller than 'X'

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "AZYZXBDJKX";
    string str = "";
    int n = s.size();

    for (int i = 0; i < n - 1;i++){
        bool flag = true;
        for (int j = 0; j < n - 1;j++){
            if(s[j]<s[j+1]){
                swap(s[j], s[j + 1]);
                flag = false;
            }
        }
        if(flag==true)
            break;
    }
    // cout << s << endl;

    for (int i = 0; i < n;i++){
        if(s[i]>='X')
            str.push_back(s[i]);
        else
            break;
    }

    cout << str;
}