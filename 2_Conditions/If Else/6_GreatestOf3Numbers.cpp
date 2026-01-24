#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 positive numbers: ";
    cin>>a>>b>>c;
    if((a<0)||(b<0)||(c<0)) cout<<"You entered wrong values";
    else{
        if((a>b)&&(a>c)) cout<<a<<" is the greatest number";
        else if((b>a)&&(b>c)) cout<<b<<" is the greatest number";
        else cout<<c<<" is the greatest number";
    }
}