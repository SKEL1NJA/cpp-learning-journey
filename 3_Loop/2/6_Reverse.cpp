#include<iostream>
using namespace std;
int main(){
    int num,num1,ld,rev=0;
    cout<<"Enter number: ";
    cin>>num;
    num1=num;
    while(num>0){
        ld=num%10;
        rev=rev*10+ld;
        num/=10;
    }
    cout<<"Reverse of "<<num1<<" = "<<rev;
}