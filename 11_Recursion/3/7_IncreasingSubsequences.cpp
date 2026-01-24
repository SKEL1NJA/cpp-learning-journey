// Print all increasing sub-sequences of length k from first n natural numbers

#include<bits/stdc++.h>
using namespace std;

void subSequence(vector<int>& ans, vector<int>& nums, int idx, int k){
    if(ans.size() == k){   // Found valid subsequence
        for(int x : ans) cout << x << " ";
        cout << endl;
        return;
    }
    if(idx == nums.size()) return; // Reached end

    // Option 1: Include current number if increasing
    if(ans.empty() || nums[idx] > ans.back()){
        ans.push_back(nums[idx]);
        subSequence(ans, nums, idx + 1, k);
        ans.pop_back(); // backtrack
    }

    // Option 2: Skip current number
    subSequence(ans, nums, idx + 1, k);
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter first " << n << " natural numbers: ";
    vector<int> nums;
    for (int i = 0; i < n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int k;
    cout << "Enter sub-sequence length: ";
    cin >> k;
    vector<int> ans;
    if(k<=n){
        cout << "Sub-sequences of length " << k << " are:" << endl;
        subSequence(ans, nums, 0, k);
    }
    else
        cout << "Sub-sequence length can't be greater than size of array\nTry again...";
}