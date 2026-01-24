#include<iostream>
using namespace std;

int pow(int a,int b){
    if(b==0)
        return 1;
    else if(b==1)
        return a;
    int ans = pow(a, b / 2);
    if(b%2==0)
        return ans * ans;
    else
        return ans * ans * a;
}

int main(){
    int a, b;
    cout << "Enter base value: ";
    cin >> a;
    cout << "Enter Power: ";
    cin>>b;

    cout << a << " raised to power " << b << " = " << pow(a, b);
}

// Gives answer in logarithmic TC hence better than previous one