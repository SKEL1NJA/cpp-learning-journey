#include<iostream>
using namespace std;

int main(){
    // Matrix 1
    int m,n;
    cout<<"Enter dimensions of matrix 1: ";
    cin>>m>>n;
    int mat1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat1[i][j];
        }
    }

    // Matrix 2
    int p,q;
    cout<<"Enter dimensions of matrix 2: ";
    cin>>p>>q;
    int mat2[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>mat2[i][j];
        }
    }

    // Addition
    int mat3[m][n];
    if((m==p)&&(n==q)){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        cout<<"Addition Matrix is: "<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<mat3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"Invalid dimensions entered\nMatrices can't be added";
}