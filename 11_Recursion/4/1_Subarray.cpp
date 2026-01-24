#include<bits/stdc++.h>
using namespace std;

void subArray(vector<int> ans, vector<int>& nums, int idx){
    if(idx==nums.size()){
        for (int i = 0; i < ans.size();i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    subArray(ans, nums, idx + 1);
    if(ans.size()==0 || nums[idx-1]==ans[ans.size()-1]){
        ans.push_back(nums[idx]);
        subArray(ans, nums, idx + 1);
    }
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> nums;
    cout << "Enter array elements: ";
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    // for (int i = 0; i < nums.size();i++){
    //     for (int j = i; j < nums.size();j++){
    //         for (int k = i; k <= j;k++){
    //             cout << nums[k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    vector<int> v;
    subArray(v, nums, 0);
}