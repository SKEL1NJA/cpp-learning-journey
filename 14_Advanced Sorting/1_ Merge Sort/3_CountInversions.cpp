#include<bits/stdc++.h>
using namespace std;

int mergeAndCount(vector<int>& nums, int lo, int mid, int hi) {
    int invCount = 0;
    int n1 = mid - lo + 1;
    int n2 = hi - mid;
    vector<int> left(n1);
    vector<int> right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = nums[lo + i];
    for (int j = 0; j < n2; j++)
        right[j] = nums[mid + 1 + j];

    int i = 0, j = 0, k = lo;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            nums[k] = left[i];
            i++;
        } else {
            nums[k] = right[j];
            invCount += (n1 - i); // Corrected logic
            j++;
        }
        k++;
    }
    while (i < n1)
        nums[k++] = left[i++];
    while (j < n2)
        nums[k++] = right[j++];

    return invCount;
}

int mergeSortAndCount(vector<int>& nums, int lo, int hi) {
    int count = 0;
    if (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        count += mergeSortAndCount(nums, lo, mid);
        count += mergeSortAndCount(nums, mid + 1, hi);
        count += mergeAndCount(nums, lo, mid, hi);
    }
    return count;
}

int main() {
    vector<int> nums = {5, 1, 3, 0, 4, 2, 6};
    int c = mergeSortAndCount(nums, 0, nums.size() - 1);
    cout << "Number of inversions: " << c << endl;
}