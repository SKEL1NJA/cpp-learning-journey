// Push zeroes to the end while maintaining the relative order of other elements

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {5, 0, 1, 2, 0, 0, 4, 0, 3};
    int n = arr.size();
    for (int i = 0; i < n - 1; i++){
        bool flag = true;
        for (int j = 0; j < n - 1;j++){
            if(arr[j]==0){
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if(flag==true)
            break;
    }

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}