// Same array ---- 2 pointer approach


#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}

void reverse(vector<int>& v){
    for(int i=0;i<v.size();i++){
        int j=v.size()-1-i;
        int temp;
        if(i<j){
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
        else break;
    }
    display(v);
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int> v;
    for(int i=0;i<size;i++){
        int x;
        cout<<"Enter element "<<i<<": ";
        cin>>x;
        v.push_back(x);
    }

    cout<<"The array is: ";
    display(v);

    cout<<endl<<"The same array in reverse order is: ";
    reverse(v);
}