#include<iostream>
using namespace std;

void TOH(int n, char S, char H, char D){
    if(n==0)
        return;
    TOH(n - 1, S, D, H);
    cout << S << " -> " <<D << endl;
    TOH(n - 1, H, S, D);
}

int main(){
    int disks;
    cout << "Enter no. of disks: ";
    cin >> disks;

    TOH(disks, 'A','B','C');
}