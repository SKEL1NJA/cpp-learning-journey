// AP-> nth term = a+(n-1)d = a+dn-d = a+d(n-1)
// AP-> 4+3(n-1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter total number of terms: ";
    cin>>n;
    cout<<"AP is:-"<<endl;
    for(int i=4;i<=4+3*(n-1);i+=3) cout<<i<<endl;
}