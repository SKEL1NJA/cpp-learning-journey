#include<iostream>
using namespace std;

int sum1Ton(int n){
    if(n==1)
        return 1;
    return n + sum1Ton(n - 1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n>0)
        cout<<"Sum of first "<<n<<" natural numbers = "<<sum1Ton(n);
    else
        cout << "Enter a number greater than or equal to 1 next time";
}