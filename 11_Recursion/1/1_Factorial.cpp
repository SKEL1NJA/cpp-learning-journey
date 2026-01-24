#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1)
        return 1;
    return n * factorial(n - 1);
}

int main(){
    int n;
    cout<<"Enter a positive number: ";
    cin >> n;
    if(n>=0)
        cout<<n<<"! = "<<factorial(n);
    else
        cout << "Enter a positive number next time";
}