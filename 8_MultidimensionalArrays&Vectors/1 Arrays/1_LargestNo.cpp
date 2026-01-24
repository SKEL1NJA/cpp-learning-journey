#include<iostream>
#include<climits>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter no. of rows and columns: ";
    cin>>m>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter element at row "<<i<<" & "<<" column "<<j<<": ";
            cin>>arr[i][j];
        }
    }
    
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }

    cout<<"Maximum element is: "<<max;
}