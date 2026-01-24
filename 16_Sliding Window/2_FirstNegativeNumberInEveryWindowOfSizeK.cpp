#include<bits/stdc++.h>
using namespace std;

void print(vector<int>& nums){
    for(int ele:nums)
        cout << ele << " ";
    cout << endl;
}

int main(){
    vector<int> arr = {2, -3, 4, 4, -7, -1, 4, -2, 6};
    int n = arr.size();
    int k = 4;
    vector<int> ans(n - k + 1);
    // Brute Force
    // for (int i = 0; i < n;i++){
    //     for (int j = i; j < n;j++){
    //         if(arr[j]<0){
    //             ans[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    // Optimized
    int currIdx = -1;
    for (int i = 0; i < k;i++){
        if(arr[i]<0){
            currIdx = i;
            ans[0] = arr[i];
            break;
        }
    }
    int i = 1, j = k;
    while(j<n){
        if(currIdx>=i)
            ans[i] = arr[currIdx];
        else{
            for (int p = i; p <= j;p++){
                if(arr[p]<0){
                    currIdx = p;
                    ans[i] = arr[p];
                    break;
                }
            }
        }
        i++, j++;
    }
    print(ans);
}