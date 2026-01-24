#include<iostream>
using namespace std;

// void OneTon(int n,int i){
//     if(i>n)
//         return;
//     cout << i << endl;
//     OneTon(n, i + 1);
// }

void OneTon(int n){
    if(n<=0)
        return;
    OneTon(n - 1);
    cout << n << endl;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin >> n;

    // OneTon(n,1);
    OneTon(n);
}