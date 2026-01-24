#include<iostream>
#include<queue>
using namespace std;

void display(vector<int>& nums){
    for(int x : nums)
        cout << x << " ";
    cout << endl;
}

int main(){
    vector<int> nums = {10, 9, 8, 7, 4, 70, 60, 50};
    int n = nums.size();
    int k = 4;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;
    for (int i = 0; i < n;i++){
        pq.push(nums[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    display(ans);
}