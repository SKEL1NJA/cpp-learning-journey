#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number between 1-12: ";
    cin>>x;
    // x -> 1,3,5,7,8,10,12 = 31 days
    // x -> 4,6,9,11 = 30 days
    // x -> 2 = 28 days
    switch(((x<=7)&&(x%2!=0))||((x>=8)&&(x%2==0))){
        case 1:
        cout<<"31 days";
    }
    switch(x==4 || x==6 || x==9 || x==11){
        case 1:
        cout<<"30 days";
    }
    switch(x){
        case 2:
        cout<<"28 days";
    }
}