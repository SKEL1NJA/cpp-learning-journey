#include<iostream>
using namespace std;
int main(){
    float cp,sp,profit,loss;
    cout<<"Enter cost Price is rupees: ";
    cin>>cp;
    cout<<"Enter Selling Price in rupees: ";
    cin>>sp;
    if(cp > sp){
        loss = cp - sp;
        cout<<"Loss incurred of "<<loss<<" rupees";
    }
    else if(sp > cp){
        profit = sp - cp;
        cout<<"Profit incurred of "<<profit<<" rupees";
    }
    else cout<<"Neither profit, nor loss";
}