#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++) f*=i;
    return f;
}
int main(){
    int n,r,permu,combi;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    permu = fact(n)/fact(n-r);
    combi = fact(n)/(fact(r)*fact(n-r));
    cout<<"The number of permutations are: "<<permu<<endl;
    cout<<"The number of combinations are: "<<combi;
}