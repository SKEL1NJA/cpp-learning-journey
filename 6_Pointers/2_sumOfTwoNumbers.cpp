#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *p = &x;
    int *q = &y;
    cout<<"Enter 2 numbers: ";
    cin>>*p>>*q;
    cout<<x<<" + "<<y<<" = "<<*p + *q;
}