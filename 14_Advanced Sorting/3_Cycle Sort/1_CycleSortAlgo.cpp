#include<bits/stdc++.h>
using namespace std;

void cycleSort(vector<int>& nums){
    int n = nums.size();
    int i = 0;
    while(i<n){
        int currIdx = nums[i] - 1;
        if(i==currIdx)
            i++;
        else
            swap(nums[i], nums[currIdx]);
    }
    return;
}

void print(vector<int>& nums){
    for (int i = 0; i < nums.size();i++)
        cout << nums[i] << " ";
    cout << endl;
}

int main(){
    vector<int> nums = {4, 3, 6, 1, 2, 5};
    int n = nums.size();
    cout << "Original array: ";
    print(nums);
    cycleSort(nums);
    cout << "After Cycle Sort: ";
    print(nums);
    return 0;
}