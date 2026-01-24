#include<iostream>
using namespace std;

int countEle(int arr[],int size,int x){
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i]>x) count++;
    }
    return count;
}

int main(){
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element at index "<<i<<": ";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter an element: ";
    cin>>x;

    int Count = countEle(arr,size,x);
    if(Count==0) cout<<"No element in the array is greater than "<<x;
    else if(Count==1) cout<<"1 element is greater than "<<x<<" in the given array";
    else cout<<Count<<" elements are greater than "<<x<<" in the given array";
}