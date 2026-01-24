#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"Enter Principle: ";
    cin>>p;
    cout<<"Enter Rate of Interest: ";
    cin>>r;
    cout<<"Enter Enter time period(in years): ";
    cin>>t;
    si = (p*r*t)/100;
    cout<<"Simple Interest = "<<si;
}