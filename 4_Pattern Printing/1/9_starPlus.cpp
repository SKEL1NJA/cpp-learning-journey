#include<iostream>
using namespace std;
int main(){
    int n,mid;
    cout<<"Enter odd number of rows: ";
    cin>>n;
    mid = n/2 + 1;
    if(n%2==0) cout<<"Wrong number of rows entered";
    else{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==mid || j==mid) cout<<"*";
                else cout<<" ";
            }
            cout<<endl;
        }
    }
}