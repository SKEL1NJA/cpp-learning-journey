// Print factorial of first 25 natural numbers and modulo the result by 10^9 + 7

#include<bits/stdc++.h>
using namespace std;

vector<long long int> factorial(int n){
    int c = 1000000000 + 7;
    vector<long long int> fact(n + 1, 1);
    for (int i = 2; i <= n;i++){
        fact[i] = (i % c * fact[i - 1] % c) % c;
    }
    return fact;
}

int main(){
    vector<long long int> res = factorial(25);
    for (int i = 0; i < res.size();i++){
        cout << i << "! = " << res[i] << endl;
    }
    return 0;
}