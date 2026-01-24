#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter no. of rows and columns: ";
    cin>>m>>n;
    int mat[m][n];

    cout<<"Enter matrix elements: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) cin>>mat[i][j];
    }

    cout<<"The matrix in spiral form is: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0) cout<<mat[j][i]<<" ";
            else cout<<mat[m-j-1][i]<<" ";
        }
    }   
}