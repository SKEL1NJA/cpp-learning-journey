#include<iostream>
using namespace std;
void count_square(int x){
    int x1=x,count = 0;
    while(x > 0){
        x/=10;
        count++;
    }
    if(x1==0){
        cout<<"Number of digits in "<<x<<" = "<<1<<endl;
        cout<<"Square of "<<1<<" = "<<1;
    }
    else{
        cout<<"Number of digits in "<<x1<<" = "<<count<<endl;
        cout<<"Square of "<<count<<" = "<<count*count;
    }
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    count_square(num);
}