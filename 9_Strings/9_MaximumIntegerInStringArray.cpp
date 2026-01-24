#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;

void maxString(vector<string>& v){
    int idx = -1;
    int maxValue = INT_MIN;
    string maxStr;
    for (int i = 0; i < v.size();i++){
        if(stoi(v[i])>maxValue){
            maxStr = v[i];
            maxValue = stoi(v[i]);
            idx = i;
        }
    }

    cout << "Maximum element is " << maxStr << " at index " << idx;
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n;i++){
        string x;
        cout << "Enter string at index " << i << ": ";
        cin >> x;
        v.push_back(x);
    }

    maxString(v);
}

// 0123 , 0023 , 456 , 00182 , 940, 2901