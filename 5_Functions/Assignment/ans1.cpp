#include<iostream>
using namespace std;
void square(int n){
    for(int i=1;i<=n;i++){
        int a = i;
        a=a*a;
        cout<<i<<"^2 = "<<a<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    square(n);
}