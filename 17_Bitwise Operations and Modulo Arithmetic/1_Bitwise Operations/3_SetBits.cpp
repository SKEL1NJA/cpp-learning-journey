#include<iostream>
using namespace std;

int setBits(int n){ // built-in function
    return __builtin_popcount(n);
}

int setBits2(int n){ // Brian Kernighan's Algorithm
    int count = 0;
    while(n>0){
        count++;
        n = n & (n - 1);
    }
    return count;
}

int main(){
    cout << setBits(60) << endl;  // 4
    cout << setBits2(60) << endl; // 4
    return 0;
}