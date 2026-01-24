#include<iostream>
using namespace std;

int main(){
    int studs;
    cout<<"Enter total no. of studs: ";
    cin>>studs;

    int marks[studs];
    for(int i=0;i<studs;i++){
        cout<<"Enter marks of student "<<i+1<<": ";
        cin>>marks[i];
    }

    cout<<"Roll No. of students scoring less than 35 are:-"<<endl;
    for(int i=0;i<studs;i++){
        if(marks[i]<35) cout<<i+1<<" ";
    }
}