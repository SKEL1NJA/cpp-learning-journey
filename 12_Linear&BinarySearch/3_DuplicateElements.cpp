#include<bits/stdc++.h>
using namespace std;

int dupEleSearch(vector<int>& arr, int target){
    int lo = 0, hi = arr.size() - 1;
    if(arr[0]==target)
        return 0;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid]==target && arr[mid]!=arr[mid-1])
            return mid;
        else if(arr[mid]==target && arr[mid]==arr[mid-1])
            hi = mid - 1;
        else{
            if(arr[mid]<target)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 8, 9};
    int target;
    cout << "Enter target element: ";
    cin >> target;

    int ans = dupEleSearch(arr, target);
    if(ans==-1)
        cout << "Not found";
    else
        cout << "Index: " << ans;

    return 0;
}