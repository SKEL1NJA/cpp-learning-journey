#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 0; i < n - 1;i++){
        int mindx = i;
        for (int j = i + 1; j < n;j++){
            if(arr[j]<arr[mindx]){
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }
    cout << "After Selection sort: " << endl;
    for (int ele:arr){
        cout << ele << " ";
    }
}

int main(){
    vector<int> arr = {5, 3, 1, 4, 2}; 

    cout << "Array is:" << endl;
    for (int ele:arr){
        cout << ele << " ";
    }

    cout << endl;
    selectionSort(arr);
}

// TC:
// BC,AC,WC: O(n^2)
// Unstable