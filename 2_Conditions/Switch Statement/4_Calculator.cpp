#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"Enter operation:-"<<endl;
    cin>>a>>op>>b;
    switch(op){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default:
        cout<<"Entered wrong expression :()";
    }
}
// This can be done using normal if-else also :)