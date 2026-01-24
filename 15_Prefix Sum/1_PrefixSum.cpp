#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n);
    ans[0] = nums[0];
    if(n>1){
        for (int i = 1; i < n;i++){
            ans[i] = nums[i] + ans[i - 1];
        }
    }
    return ans;
}

void print(vector<int>& nums){
    for(int ele:nums)
        cout << ele << " ";
    cout << endl;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    print(nums);
    vector<int> ans = prefixSum(nums);
    print(ans);
}

// TC: O(n)
// SC: O(n)