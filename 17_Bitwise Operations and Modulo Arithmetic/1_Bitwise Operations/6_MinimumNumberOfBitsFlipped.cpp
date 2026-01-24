#include<iostream>
using namespace std;

int minBitsFlipped(int start, int goal){
    int ans = start ^ goal;
    return __builtin_popcount(ans);
}

int main(){
    cout << minBitsFlipped(5, 11);
    return 0;
}