// This code will work for both square and rectangular matrices

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter dimensions of matrix : ";
    cin>>m>>n;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    // Transpose
    int transpose[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transpose[j][i] = mat[i][j];
        }
    }

    // Printing Transpose
    cout << "Transpose of the matrix is:"<<endl;
    for(int i=0;i<n;i++) {       
        for(int j=0; j<m;j++) {   
            cout << transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}