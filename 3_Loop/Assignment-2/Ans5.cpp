#include<iostream>
using namespace std;
int main(){
    int num,num1,ld,even_sum=0;
    bool flag=false;
    cout<<"Enter a number: ";
    cin>>num;
    num1=num;
    while(num>0){
        ld = num%10;
        if(ld%2==0){
            flag=true;
            even_sum+=ld;
        }
        num/=10;
    }
    if(flag==false) cout<<"No even digits present in the number";
    else cout<<"Sum of even digits of "<<num1<<" = "<<even_sum;
}