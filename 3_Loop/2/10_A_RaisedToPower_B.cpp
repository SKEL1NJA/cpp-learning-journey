#include<iostream>
using namespace std;
int main(){
    float a,b,pow=1;
    bool flag = true;
    cout<<"Enter base value: ";
    cin>>a;
    cout<<"Enter power: ";
    cin>>b;
    if(b<0){
        flag = false;
        b=-b;
    }
    for(int i=1;i<=b;i++) pow*=a;
    if(flag==false){
        pow=1/pow;
        b=-b;
    }
    if(a==0 && b==0) cout<<"Undefined";
    else cout<<a<<" raised to power "<<b<<" is "<<pow;
}