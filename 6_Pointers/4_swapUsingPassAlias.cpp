#include<iostream>
using namespace std;
int swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return(a,b);
}
int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping..."<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b;
}