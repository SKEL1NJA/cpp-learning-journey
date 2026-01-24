#include<iostream>
using namespace std;
float area(float r){
    float a = 3.14*r*r;
    return a;
}
int main(){
    float rad;
    cout<<"Enter radius: ";
    cin>>rad;
    cout<<"Area = "<<area(rad);
}