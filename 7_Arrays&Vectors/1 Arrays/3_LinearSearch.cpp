#include<iostream>
using namespace std;

int linearSearch(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1; // Element not found
}

int main(){
    int size,key;
    cout<<"Enter size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element at index "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Enter Element to find: ";
    cin>>key;

    int index = linearSearch(arr,size,key);

    if(index!=-1) cout<<"Element found at index "<<index;
    else cout<<"Element not found";
}