#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    int *ptr1 = &a, *ptr2=&b;
    cout<<a<<" x "<<b<<" = "<<*ptr1 * *ptr2;
}