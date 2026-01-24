#include<iostream>
using namespace std;
void fdLd(int n,int *ptr1,int *ptr2){
    int n1 = n;
    *ptr2 = n % 10;
    while(n>9) n/=10;
    *ptr1 = n;
    cout<<"First digit of "<<n1<<" = "<<*ptr1<<endl<<"Last digit of "<<n1<<" = "<<*ptr2; 
}
int main(){
    int n,fd,ld;
    cout<<"Enter a number: ";
    cin>>n;
    fdLd(n,&fd,&ld);
}