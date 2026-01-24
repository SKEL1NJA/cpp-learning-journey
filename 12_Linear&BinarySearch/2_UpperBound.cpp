#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>& arr, int target){
    int lo = 0, hi = arr.size() - 1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid]>=target){
            ans = mid;
            hi = mid - 1;
        }
        else
            lo = mid + 1;
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int target;
    cout<< "Enter the target value: ";
    cin >> target;

    int ub = upperBound(arr, target);
    if(ub!=-1)
        cout << "Upper Bound is " << ub;
    else
        cout << "Not found";

    return 0;
}