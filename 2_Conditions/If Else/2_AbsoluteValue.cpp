#include<iostream>
using namespace std;
int main(){
    int num,num1;
    cout<<"Enter a number: ";
    cin>>num;
    num1=num;
    if(num<0){
        num=-num;
        cout<<"Absolute value of "<<num1<<" is "<<num;
    }
    else cout<<"Absolute value of "<<num<<" is "<<num;
}