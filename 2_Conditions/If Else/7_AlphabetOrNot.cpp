#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any alphabet: ";
    cin>>ch;
    int a = int(ch);
    if(((a>=65)&&(a<=90))||((a>=97)&&(a<=122))) cout<<"Valid alphabet";
    else cout<<"Not a valid alphabet";
}