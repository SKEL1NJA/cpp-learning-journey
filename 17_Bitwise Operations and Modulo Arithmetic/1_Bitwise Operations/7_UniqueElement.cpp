#include<iostream>
#include<vector>
using namespace std;

int uniqueElement(vector<int>& nums){
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans ^= nums[i];
    }
    return ans;
}

int main(){
    vector<int> nums = {2, 1, 3, 2, 1, 5, 5, 6, 3};
    cout << uniqueElement(nums);
}