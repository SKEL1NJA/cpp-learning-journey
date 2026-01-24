#include<bits/stdc++.h>
using namespace std;

int reverse(int rev, int num){
    if(num==0)
        return rev;
    int ld = num % 10;
    return reverse(rev * 10 + ld, num / 10);
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin >> num;

    int rev = 0;
    cout << "Reversed Number: " << reverse(rev, num);
}