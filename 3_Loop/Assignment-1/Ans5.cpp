// GP-> nth term = ar^n-1
// GP -> 3*4^n-1
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,power;
    cout<<"Enter total number of terms: ";
    cin>>n;
    power = pow(4,n-1);
    cout<<"GP is:-"<<endl;
    for(int i=3;i<=3*power;i*=4) cout<<i<<endl;
}