#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=1,sum;
    cout<<"Enter nth fibonacci term: ";
    cin>>n;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<n<<" fibonacci term = "<<b;
}