// AP -> nth term = a+(n-1)d = a+dn-d = a+d(n-1)
#include<iostream>
using namespace std;
int main(){
    int a,n,d;
    cout<<"Enter 1st term: ";
    cin>>a;
    cout<<"Enter common difference: ";
    cin>>d;
    cout<<"Enter total number of terms: ";
    cin>>n;
    cout<<"AP is:"<<endl;
    for(int i=a;i<=a+d*(n-1);i+=d) cout<<i<<endl;
}