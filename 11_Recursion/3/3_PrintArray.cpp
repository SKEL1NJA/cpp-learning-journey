#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int>& v,int i){
    if(i==v.size())
        return;
    cout << v[i]<<" ";
    printArr(v, i + 1);
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n;i++){
        int x;
        cout<<"Enter element "<<i+1<<": ";
        cin >> x;
        v.push_back(x);
    }

    printArr(v, 0);
}