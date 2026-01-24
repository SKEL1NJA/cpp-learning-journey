#include<iostream>
using namespace std;
void odd_num(int a, int b){
    cout<<"Odd numbers between "<<a<<" and "<<b<<" are"<<endl;
    for(int i=a;i<=b;i++){
        if(i%2==0) continue;
        else cout<<i<<endl;
    }
}
int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    odd_num(a,b);
}