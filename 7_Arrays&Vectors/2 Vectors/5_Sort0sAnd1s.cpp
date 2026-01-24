// 2-pass approach

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}

void sort01(vector<int>& v){
    int no0 = 0, no1 = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) no0++;
        else no1++;
    }
    for(int i=0;i<v.size();i++){
        if(i<no0) v[i]=0;
        else v[i]=1;
    }
    cout<<"The sorted array is: ";
    display(v);
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int> v;
    bool flag = false;
    for(int i=0;i<size;i++){
        int x;
        cout<<"Enter element "<<i<<": ";
        cin>>x;
        if(x==0 ||x==1){
            flag = true;
            v.push_back(x);
        }
        else{
            flag = false;
            cout<<"Invalid input"<<endl;
            break;
        }
    }

    if(flag==true){
        cout<<"The array is: ";
        display(v);
        cout<<endl;

        sort01(v);
    }
    else cout<<"Try next time";
}