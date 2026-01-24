#include<iostream>
#include<vector>
using namespace std;

int lastX(vector<int>& v,int x){
    int idx = -1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    return idx;
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    vector<int> v;
    for(int i=0;i<size;i++){
        int x;
        cout<<"Enter element at index "<<i<<": ";
        cin>>x;
        v.push_back(x);
    }

    int x;
    cout<<"Enter element to find: ";
    cin>>x;
    int idx = lastX(v,x);
    if(idx==-1) cout<<x<<" not found";
    else cout<<"Last occurence of "<<x<<" at index "<<idx;
}

// test: 1,3,2,4,3,4,1,6 