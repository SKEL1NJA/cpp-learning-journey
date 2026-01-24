#include<bits/stdc++.h>
using namespace std;

void duplicates(string ans, string original, int idx, bool flag) {
    if(idx == original.size()) {
        cout << ans << endl;
        return;
    }

    char ch = original[idx];
    
    // Include the character
    if(flag) duplicates(ans + ch, original, idx + 1, true);
    
    // Skip duplicates
    int next = idx + 1;
    while(next < original.size() && original[next] == ch) next++;
    duplicates(ans, original, next, true);
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    sort(str.begin(), str.end());
    duplicates("", str, 0, true);
}