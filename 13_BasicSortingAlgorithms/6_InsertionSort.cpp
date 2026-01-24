#include<bits/stdc++.h>
using namespace std;

// void insertionSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 1; i < n; i++) {
//         int j = i;
//         while (j >= 1 && arr[j] < arr[j - 1]) {
//             swap(arr[j], arr[j - 1]);
//             j--;
//         }
//     }

//     for (int ele : arr) {
//         cout << ele << " ";
//     }
// }

void insertionSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 1; i < n;i++){
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j]>key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int ele : arr){
        cout << ele << " ";
    }
}

int main(){
    vector<int> arr = {9, 3, 5, 10, 7, 2, 4, 15, 1};

    cout << "The array is: " << endl;
    for(int ele:arr)
        cout << ele << " ";

    cout << endl << "After Insertion Sort:" << endl;
    insertionSort(arr);
}

// TC:
// BC: O(n)
// AC,WC: O(n^2)
// Stable