// First 'n' fibonacci numbers
#include<iostream>
using namespace std;
int main(){
    int a=1,b=1,fibo,num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=num-2;i++){
        fibo=a+b;
        a=b;
        b=fibo;
        cout<<b<<" ";
    }
}