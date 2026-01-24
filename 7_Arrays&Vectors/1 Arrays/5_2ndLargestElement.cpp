#include<iostream>
#include<climits>
using namespace std;

void secondMax(int arr[],int size){
    int max = INT_MIN, max2 = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }
    for(int i=0;i<size;i++){
        if((arr[i]>max2)&&(arr[i]!=max)) max2 = arr[i];
    }
    cout<<max2<<" is the 2nd largest element present in the array";
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

    secondMax(arr,size);
}