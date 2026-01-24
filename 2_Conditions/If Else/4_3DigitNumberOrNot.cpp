#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    if(num>=0){
        if(num>99 && num<1000) cout<<num<<" is a 3 digit number";
        else cout<<num<<" is not a 3 digit number";
    }
    else cout<<num<<" a negative number";
}