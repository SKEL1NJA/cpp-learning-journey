#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 0; i < n - 1;i++){ // total passes
        for (int j = 0; j < n - 1 - i;j++){ // swapping with next element if greater
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j + 1]);
        }
    }
    cout << "After Bubble Sort: " << endl;
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = {5, 4, 3, 2, 1};
    cout << "Before Bubble sort: " << endl;
    for (int i = 0; i < arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr);
    return 0;
}

// TC: BC, AC, WC: O(n^2)
// SC: O(1)