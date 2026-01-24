#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    cout<<"The array is: ";
    for (int i = 0; i < v.size();i++)
        cout << v[i] << " ";
    cout << endl;
}

// int duplicate(vector<int>& v){
//     for (int i = 0; i < v.size() - 1;i++){
//         for (int j = i + 1; j < v.size();j++){
//             if(v[i]==v[j]){
//                 return v[j];
//             }
//         }
//     }
//     return -1;
// }

int duplicate(vector<int>& v){
    int dupSum = 0;
    for (int i = 0; i < v.size();i++){
        dupSum += v[i];
    }
    int n = v.size() - 1;
    int sum = n * (n + 1) / 2;
    int dup = dupSum - sum;
    return dup;
}

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n;i++){
        int x;
        cout << "Enter element " << i << ": ";
        cin >> x;
        arr.push_back(x);
    }

    display(arr);

    int dup = duplicate(arr);
    cout << "Duplicate element: " << dup;
}