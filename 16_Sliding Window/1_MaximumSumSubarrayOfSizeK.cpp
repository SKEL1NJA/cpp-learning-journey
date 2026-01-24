#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = nums.size();
    int k = 4;
    // int maxSum = INT_MIN;
    // for (int i = 0; i < n - k;i++){
    //     int sum = 0;
    //     for (int j = i; j < i + k;j++){
    //         sum += nums[j];
    //     }
    //     maxSum = max(sum, maxSum);
    // }
    // cout << maxSum;

    // Sliding Window algorithm
    int currSum = 0;
    for (int i = 0; i < k;i++)
        currSum += nums[i];
    int i = 1, j = k;
    int maxSum = currSum;
    while(j<n){
        currSum += (nums[j] - nums[i - 1]);
        maxSum = max(maxSum, currSum);
        i++, j++;
    }
    cout << maxSum;
}