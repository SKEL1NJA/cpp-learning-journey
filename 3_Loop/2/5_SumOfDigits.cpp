#include<iostream>
using namespace std;
int main(){
    int num,num1,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    num1=num;
    while(num>0){
        int ld = num%10;
        sum+=ld;
        num/=10;
    }
    cout<<"Sum of digits of "<<num1<<" = "<<sum;
}