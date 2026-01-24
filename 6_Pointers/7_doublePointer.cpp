#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int *ptr = &x;
    int **ptr1 = &ptr;
    cout<<&x<<endl<<ptr<<endl<<*ptr1<<endl; // Prints address of x
    cout<<ptr1<<endl; // Prints address of ptr
    cout<<x<<endl<<*ptr<<endl<<**ptr1; // Prints value of x
}