#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 0; i < n - 1;i++){
        bool flag = true; // array is sorted
        for (int j = 0; j < n - 1 - i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if(flag==true)
            break;
    }
    cout << "After Bubble Sort: " << endl;
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = {5, 1, 2, 3, 4};
    cout << "Before Bubble sort: " << endl;
    for (int i = 0; i < arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr);
    return 0;
}

// TC:
// BC: O(n), AC,WC: O(n^2)

// SC: o(1)

// Stable sorting algorithm

// Total swaps: n(n-1)/2