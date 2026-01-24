#include<bits/stdc++.h>
using namespace std;

int lastOccurence(vector<int> & arr, int target){
    int ans = -1;
    int lo = 0;
    int hi = arr.size() - 1;
    if(arr[arr.size()-1]==target)
        return arr.size()-1;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid]==target){
            if(arr[mid]!=arr[mid+1]){
                ans = mid;
                break;
            }
            else
                lo = mid + 1;
        }
        else if(arr[mid]<target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 2, 3, 3, 4, 4, 4, 5};
    int target = 4;

    int lo = 0;
    int hi = arr.size() - 1;

    int ans = lastOccurence(arr, target);
    cout << ans;
}