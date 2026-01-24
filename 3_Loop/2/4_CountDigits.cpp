#include<iostream>
using namespace std;
int main(){
    int num,num1,count=0;
    cout<<"Enter number: ";
    cin>>num;
    num1=num;
    while(num>0){
        num/=10;
        count+=1;
    }
    if(num1==0) cout<<"Number of digits in "<<num1<<" = "<<1;
    else cout<<"Number of digits in "<<num1<<" = "<<count;
}