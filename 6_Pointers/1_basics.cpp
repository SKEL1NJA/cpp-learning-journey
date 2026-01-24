#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int *p = &x;
    cout<<&x<<endl<<p<<endl; //Both print address of x;
    cout<<&p<<endl; //Address of p;
    cout<<*p<<endl; //Prints value of the variable whose address is stored in it;
    *p = 100; //Changes the value stored in 'x'
    cout<<x; // Changing the value does not change the address
}