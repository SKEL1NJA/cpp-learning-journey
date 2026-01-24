#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter no. of rows/columns: ";
    cin>>m;
    int mat[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++) cin>>mat[i][j];
    }

    // Transpose in the same matrix only
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    // Printing transpose
    cout<<"The transpose matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
           cout<< mat[i][j]<<" ";
        }
        cout<<endl;
    }
}