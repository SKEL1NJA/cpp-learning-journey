#include<bits/stdc++.h>
using namespace std;

int noOf1(vector<int>& arr){
    int lo = 0, hi = arr.size() - 1;
    int first1 = -1;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid]==1){
            first1 = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    if(first1==-1)
        return 0;
    else
        return arr.size() - first1;
}

int main(){
    vector<int> arr = {0, 0, 0, 0, 1, 1};
    int ans = noOf1(arr);
    cout << ans;
}