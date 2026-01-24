#include<iostream>
using namespace std;
int main(){
    // x = [x] + {x}
    // {x} = x - [x]
    float x,z;
    cout<<"Enter a floating value: ";
    cin>>x;
    int y = int(x);
    if(y<0) y-=1;
    z = x - y;
    cout<<"Fractional part of "<<x<<" is "<<z;
}