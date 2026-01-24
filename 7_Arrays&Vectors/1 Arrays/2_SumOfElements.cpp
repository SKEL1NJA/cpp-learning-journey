#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element at index "<<i<<" : ";
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    cout<<"Sum of all the elements in the array = "<<sum;
}