// GP -> nth term = ar^(n-1)
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,n,r,power;
    cout<<"Enter 1st term: ";
    cin>>a;
    cout<<"Enter common ratio: ";
    cin>>r;
    cout<<"Enter total number of terms: ";
    cin>>n;
    power = pow(r,n-1);
    cout<<"GP is: "<<endl;
    for(int i=a;i<=a*power;i*=r) cout<<i<<endl;
}