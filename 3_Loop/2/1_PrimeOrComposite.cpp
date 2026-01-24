#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive number: ";
    cin>>num;
    if(num<0) cout<<"Invalid Number";
    else if(num==0 || num==1) cout<<num<<" is neither prime, nor composite";
    else if(num==2) cout<<num<<" is a prime number";
    else{
        for(int i=2;i<=num-1;i++){
            if(num%i==0){
                cout<<num<<" is a composite number";
                break;
            }
            else{
                cout<<num<<" is a prime number";
                break;
            }
        }
    }
}