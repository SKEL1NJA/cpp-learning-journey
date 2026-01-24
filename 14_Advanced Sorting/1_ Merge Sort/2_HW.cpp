// Implement merge sort algorithm to sort an array of elements in decreasing order

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums, int lo, int mid, int hi){
    int n1 = mid - lo + 1;
    int n2 = hi - mid;
    vector<int> nums1(n1);
    vector<int> nums2(n2);    
    for (int i = 0; i < n1;i++)
        nums1[i] = nums[lo + i];

    for (int j = 0; j < n2;j++)
        nums2[j] = nums[mid + 1 + j];

    int i = 0, j = 0, k = lo;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]>=nums2[j])
            nums[k++] = nums1[i++];
        else
            nums[k++] = nums2[j++];
    }
    while(i<nums1.size())
        nums[k++] = nums1[i++];
    while(j<nums2.size())
        nums[k++] = nums2[j++];
        
    return;
}

void mergeSort(vector<int>& nums, int lo, int hi){
    if(lo>=hi)
        return;
    int mid = lo + (hi - lo) / 2;
    mergeSort(nums, lo, mid);
    mergeSort(nums, mid + 1, hi);
    merge(nums, lo, mid, hi);
    return;
}

void print(vector<int>& nums){
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> nums = {12, 11, 13, 5, 6, 7, 2, 9};

    cout << "Original array: ";
    print(nums);

    mergeSort(nums, 0, nums.size() - 1);

    cout << "After Reverse Merge Sort: ";
    print(nums);

    return 0;
}