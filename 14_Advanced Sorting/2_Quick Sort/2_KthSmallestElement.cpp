#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& nums, int lo, int hi){
    int mid = lo + (hi - lo) / 2;
    int pivotEle = nums[mid];
    int count = 0;
    for (int i = lo; i <= hi;i++){
        if(i==mid)
            continue;
        if(nums[i]<=pivotEle)
            count++;
    }
    int pivot = count + lo;
    swap(nums[mid], nums[pivot]);
    int i = lo, j = hi;
    while(i<pivot && j>pivot){
        if(nums[i]<=nums[pivot])
            i++;
        else if(nums[j]>nums[pivot])
            j--;
        else{
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
    return pivot;
}

int kthSamllest(vector<int>& nums, int lo, int hi, int k){
    if(lo<=hi){
        int pi = partition(nums, lo, hi);
        if(pi+1==k)
            return nums[pi];
        else if(pi+1<k)
            return kthSamllest(nums, pi + 1, hi, k);
        else
            return kthSamllest(nums, lo, pi - 1, k);
    }
    return -1;
}

void print(vector<int>& nums){
    for (int i = 0; i < nums.size();i++)
        cout << nums[i] << " ";
    cout << endl;
}

int main(){
    vector<int> nums = {5, 1, 8, 2, 7, 6, 3, 5};
    cout << "Given array: ";
    print(nums);
    int k = 4;
    cout<<k<<"th smallest element is: "<<kthSamllest(nums, 0, nums.size() - 1,k);
}