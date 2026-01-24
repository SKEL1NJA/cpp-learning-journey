#include<iostream>
using namespace std;
int main(){
    float marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if((marks<0)||(marks>100)) cout<<"Invalid marks";
    else{
        if(marks>=91) cout<<"Excellent";
        else if(marks>=81) cout<<"Very Good";
        else if(marks>=71) cout<<"Good";
        else if(marks>=61) cout<<"Can do better";
        else if(marks>=51) cout<<"Average";
        else if(marks>=40) cout<<"Below Average";
        else cout<<"fail";
    }
}