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

void quickSort(vector<int>& nums, int lo, int hi){
    if(lo>=hi)
        return;
    int pivot = partition(nums, lo, hi);
    quickSort(nums, lo, pivot - 1);
    quickSort(nums, pivot + 1, hi);
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
    quickSort(nums, 0, nums.size() - 1);
    cout << "After Quick Sort: ";
    print(nums);
}

// TC: O(nlog n)
// Sc: O(log n)
// Not stable
// In place