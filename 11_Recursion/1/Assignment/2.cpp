#include<iostream>
using namespace std;

int nStairs(int n){
    if(n==3)
        return 4;
    else if(n==2)
        return 2;
    else if(n==1)
        return 1;
    return nStairs(n - 1) + nStairs(n - 2) + nStairs(n - 3);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << nStairs(n);
}