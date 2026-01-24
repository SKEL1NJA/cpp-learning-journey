#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    if(num<0) cout<<"Negative number entered";
    else{
        if(((num%5==0)||(num%3==0))&&(num%15!=0)) cout<<num<<" is divisible by 5 or 3 but not by 15";
        else if(num%15==0) cout<<num<<" is divisible by 15";
        else cout<<num<<" is not divisible by 5 or 3 or 15";
    }
}