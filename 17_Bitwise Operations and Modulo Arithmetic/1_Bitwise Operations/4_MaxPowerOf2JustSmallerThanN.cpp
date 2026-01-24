#include<iostream>
using namespace std;

int maxPowerOf2(int n){
    int ans = 0;
    while(n>0){
        ans = n;
        n = n & (n - 1);
    }
    return ans;
}

int maxPowerOf2_2(int n){
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    return (n + 1) >> 1; // (n+1)/2
}

int main(){
    cout << maxPowerOf2(139) << endl;
    cout << maxPowerOf2_2(139) << endl;

    return 0;
}