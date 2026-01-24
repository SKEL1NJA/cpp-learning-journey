#include<iostream>
using namespace std;

// O(1) TC and SC
int flipBits1(int num){
    int num2 = num;
    num2 = num2 | (num2 >> 1);
    num2 = num2 | (num2 >> 2);
    num2 = num2 | (num2 >> 4);
    num2 = num2 | (num2 >> 8);
    num2 = num2 | (num2 >> 16);
    int ans = num ^ num2;
    return ans;
}

// O(log n) TC and O(1) SC
int flipBits2(int num){
    int num2 = num;
    int flipped;
    while(num2>0){
        flipped = num2;
        num2 = num2 & (num2 - 1);
    }
    flipped = (flipped << 1) - 1;
    flipped = num ^ flipped;
    return flipped;
}

int main(){
    cout << flipBits1(5) << endl;
    cout << flipBits2(5) << endl;
}