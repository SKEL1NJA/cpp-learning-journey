// Using extra array


#include <iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}

void reverse(vector<int>& v){
    vector<int> v2(v.size());
    for(int i=0;i<v.size();i++){
        v2[i] = v[v.size()-1-i];
    }
    cout<<endl<<"The array in reverse order is: ";
    display(v2);
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int> v1;
    for(int i=0;i<size;i++){
        int x;
        cout<<"Enter element "<<i<<": ";
        cin>>x;
        v1.push_back(x);
    }

    cout<<"The original array is: ";
    display(v1);

    reverse(v1);
}