#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 5, 10};
    int n = arr.size();

    // Prefix Sum
    for (int i = 1; i < n;i++){
        arr[i] += arr[i - 1];
    }
    // Checking
    int idx = -1;
    for (int i = 0; i < n;i++){
        if(2*arr[i]==arr[n-1]){
            idx = i;
            break;
        }
    }

    // result
    if(idx==-1)
        cout << "Can't be partitioned";
    else
        cout << "Can be partitioned at index " << idx;
}