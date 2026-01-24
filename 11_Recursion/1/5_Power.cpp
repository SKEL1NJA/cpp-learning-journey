#include<iostream>
using namespace std;

int pow(int a, int b){
    if(b==0)
        return 1;
    else if(b==1)
        return a;
    return a * pow(a,b-1);
}

int main(){
    int a, b;
    cout << "Enter base number: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> b;

    cout<<a<<" raised to power "<<b<<" = "<<pow(a, b);
}