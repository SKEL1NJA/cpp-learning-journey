#include<bits/stdc++.h>
using namespace std;

// int hcf(int a, int b){
//     for (int i = min(a, b); i >= 2;i--){
//         if(a%i==0 && b%i==0)
//             return i;
//     }
//     return 1;
// }

int hcf(int a, int b){
    if(a==0)
        return b;
    return hcf(b % a, a);  // new divisor = remainder, new dividend = previous divisor
}

int main(){
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    cout << hcf(a, b) << " is gcd of " << a << " & " << b;
}