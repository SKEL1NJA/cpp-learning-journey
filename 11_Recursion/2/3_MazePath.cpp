// LeetCode-62(Unique Paths) ---  Can't solve there right now. Solve there after learning DP

#include<iostream>
using namespace std;

int uniquePaths(int m, int n){
    if(m<1 || n<1)
        return 0;
    if(m==1 && n==1)
        return 1;
    int rightWays = uniquePaths(m, n - 1);
    int downWays = uniquePaths(m - 1, n);
    int totalWays = rightWays + downWays;
    return totalWays;
}

void printPaths(int m, int n, string s){
    if(m<1 || n<1)
        return;
    if(m==1 && n==1){
        cout << s << endl;
        return;
    }
    printPaths(m, n - 1, s + "R"); // Right
    printPaths(m - 1, n, s + "D"); // Down
}

int main(){
    int rows, cols;
    cout<<"Enter no. of rows and columns: ";
    cin >> rows >> cols;

    cout << uniquePaths(rows, cols);
    cout << endl;
    printPaths(rows, cols, "");
}