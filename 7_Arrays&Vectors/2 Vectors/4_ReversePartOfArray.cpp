#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}

void revPart(vector<int>& v, int i, int j){
    if(i<0 || j>=v.size() || i>=j) return ;
    int temp;
    while(i<j){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++,j--;
    }
    cout<<"The partially reversed array is: ";
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
    cout<<endl;

    int i,j;
    cout<<"Enter indices to reverse: ";
    cin>>i>>j;
    revPart(v,i,j);
}