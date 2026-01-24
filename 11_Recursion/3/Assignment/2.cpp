#include<bits/stdc++.h>
using namespace std;

void incSequence(int start, int n, int k, vector<int>& current){
    if(current.size()==k){
        for (int i = 0; i < current.size();i++){
            cout << current[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = start; i <= n;i++){
        current.push_back(i);
        incSequence(i + 1, n, k, current);
        current.pop_back();
    }
}

int main(){
    int n;
    cout << "Enter a number between 1 to 20(inclusive): ";
    cin >> n;
    if(n<1 || n>20){
        cout << "Invalid Number";
        return 0;
    }
    int k;
    cout << "Enter a number between 1 to " << n << ": ";
    cin >> k;
    if (k < 1 || k > n){
        cout << "Invalid range";
        return 0;
    }

    vector<int> current;
    cout << "Increasing sequences of length " << k <<"(inclusive): "<<endl;
    incSequence(1, n, k, current);

    return 0;
}