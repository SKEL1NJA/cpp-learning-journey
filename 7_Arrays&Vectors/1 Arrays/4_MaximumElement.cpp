#include<iostream>
#include<climits>
using namespace std;

void maxEle(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }
    cout<<max<<" is the maximum element present in the array";
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

    maxEle(arr,size);
}