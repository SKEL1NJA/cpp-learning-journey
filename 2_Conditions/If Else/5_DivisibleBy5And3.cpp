#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%15==0) cout<<num<<" is divisible by both 5 and 3";
    else if((num%5==0)&&(num%3!=0)) cout<<num<<" is only divisible by 5";
    else if((num%5!=0)&&(num%3==0)) cout<<num<<" is only divisible by 3";
    else cout<<num<<" is neither divisible by 5, nor by 3";
}