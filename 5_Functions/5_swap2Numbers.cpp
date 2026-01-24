#include<iostream>
using namespace std;
int swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
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

// The following code will not work