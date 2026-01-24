#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter no. of rows and columns: ";
    cin>>m>>n;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter element at row "<<i<<" column "<<j<<": ";
            cin>>mat[i][j];
        }
    }

    cout<<"The matrix is: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    // Sum
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++) sum += mat[i][j];
    }
    cout<<"Sum = "<<sum;
}