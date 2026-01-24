#include<iostream>
#include<cmath>
using namespace std;

// O(n)
// void factors(int n){
//     for (int i = 1; i <= n;i++){
//         if(n%i==0)
//             cout << i << " ";
//     }
//     return;
// }

void factors(int n){
    for (int i = 1; i < sqrt(n);i++){
        if(n%i==0)
            cout << i << " ";
    }
    for (int i = sqrt(n); i >= 1;i--){
        if(n%(n/i)==0)
            cout << n / i << " ";
    }
}

int main(){
    int n = 60;
    factors(n);
    return 0;
}