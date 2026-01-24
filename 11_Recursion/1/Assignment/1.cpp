#include<iostream>
using namespace std;

int oddSum(int a, int b){
    if(a>b)
        return 0;
    if(a%2!=0)
        return a + oddSum(a + 2, b);
    else
        return oddSum(a + 1, b);
}

int main(){
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    if(a<=b)
        cout << oddSum(a, b) << endl;
    else
        cout << "a should be less than or equal to b...\n try again";
}