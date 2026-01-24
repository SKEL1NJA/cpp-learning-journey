#include<bits/stdc++.h>
using namespace std;

// void substring(string ans, string original){
//     if(original.size()==0){
//         cout << ans << endl;
//         return;
//     }
//     char ch = original[0];
//     substring(ans + ch, original.substr(1));
//     substring(ans, original.substr(1));
// }

void substring(string ans, string original, int idx){
    if(idx == original.size()){
        cout << ans << endl;
        return;
    }
    char ch = original[idx];
    substring(ans + ch, original, idx + 1);
    substring(ans, original, idx + 1);
}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin >> str;

    substring("", str, 0);
}