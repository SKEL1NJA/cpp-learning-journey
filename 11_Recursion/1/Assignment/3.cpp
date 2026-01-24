#include<iostream>
using namespace std;

bool isPowOf2(int n){
    if(n<=0)
        return false;
    if(n==1)
        return true;
    if(n%2!=0)
        return false;
    isPowOf2(n / 2);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin >> n;

    if(isPowOf2(n))
        cout << "True";
    else
        cout << "False";
}