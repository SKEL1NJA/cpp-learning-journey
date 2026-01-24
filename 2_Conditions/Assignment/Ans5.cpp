#include<iostream>
using namespace std;
int main(){
    char ch1,ch2;
    cout<<"Enter 2 characters: ";
    cin>>ch1>>ch2;
    int ascii1 = (int)ch1;
    int ascii2 = (int)ch2;
    cout<<"The difference between ascii values of entered charcters is:-"<<endl;
    cout<<ch1<<" - "<<ch2<<" = "<<ascii1-ascii2;
}