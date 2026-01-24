#include<iostream>
#include<string>
using namespace std;

// void skipChar(string ans, string original){
//     if(original.size()==0){
//         cout << ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch == 'a' || ch == 'A')
//         skipChar(ans, original.substr(1));
//     else
//         skipChar(ans += ch, original.substr(1));
// }

void skipChar(string ans, string original, int idx){
    if(idx == original.size()){
        cout << ans;
        return;
    }
    char ch = original[idx];
    if(ch == 'a' || ch == 'A')
        skipChar(ans, original, idx + 1);
    else
        skipChar(ans += ch, original, idx + 1);
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    skipChar("", str, 0);
}