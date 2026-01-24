#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int>& nums){
    int n = nums.size();
    if(n>1){
        for (int i = 1; i < n;i++)
            nums[i] += nums[i - 1];
    }
    return nums;
}

void print(vector<int>& nums){
    for(int ele:nums)
        cout << ele << " ";
    cout << endl;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    print(nums);
    prefixSum(nums);
    print(nums);
}

// TC: O(n)
// SC: O(1) ---> Modifying the input array