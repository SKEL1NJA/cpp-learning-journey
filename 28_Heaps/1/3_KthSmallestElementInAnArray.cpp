#include<iostream>
#include<queue>
using namespace std;

int main(){
    vector<int> nums = {10, 20, -4, 6, 18, 2, 105, 118};
    int n = nums.size();
    int k = 3;
    priority_queue<int> pq;
    for (int i = 0; i < n;i++){
        pq.push(nums[i]);
        if(pq.size()>k)
            pq.pop();
    }
    cout << k << "rd smallest element is " << pq.top();
}