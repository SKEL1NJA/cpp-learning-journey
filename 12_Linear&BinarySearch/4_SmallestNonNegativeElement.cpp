#include<bits/stdc++.h>
using namespace std;

int missingEle(vector<int>& arr){
    int ans = -1;
    int lo = 0, hi = arr.size() - 1;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid]==mid)
            lo = mid + 1;
        else{
            ans = mid;
            hi = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {0, 1, 2, 3, 4, 8, 9, 12};

    int missing = missingEle(arr);
    if(missing==-1)
        cout << "No missing element";
    else
        cout << "Missing element: " << missing;
}