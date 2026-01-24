#include<iostream>
using namespace std;

int main(){
    // Matrix 1
    int m,n;
    cout<<"Enter dimensions of matrix 1: ";
    cin>>m>>n;
    int mat1[m][n];
    cout<<"Enter matrix 1: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) cin>>mat1[i][j];
    }

    // Matrix 2
    int p,q;
    cout<<"Enter dimensions of matrix 2: ";
    cin>>p>>q;
    int mat2[p][q];
    cout<<"Enter matrix 2: "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++) cin>>mat2[i][j];
    }

    // Matrix Multiplication
    int res[m][q];
    if(n!=p) cout<<"Invalid Dimensions\nMatrices can't be multiplied";
    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                // res[i][j] = mat1[i][0] * mat2[0][j] + mat1[i][1]*mat2[1][j] + ....
                res[i][j] = 0;
                for(int k=0;k<p;k++) res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display
    cout<<"Resultant Matrix after multiplication: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}