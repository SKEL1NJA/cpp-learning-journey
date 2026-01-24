#include<bits/stdc++.h>
using namespace std;

void permutationString(string ans, string original){
    if(original.empty()){
        cout << ans << endl;
        return;
    }

    for(int i = 0; i < original.size(); i++){
        char ch = original[i];
        string left = original.substr(0, i);
        string right = original.substr(i + 1);
        string result = left + right; // remove the chosen char
        permutationString(ans + ch, result); // restart from 0
    }
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Different Permutations are: " << endl;
    permutationString("", str);
}  