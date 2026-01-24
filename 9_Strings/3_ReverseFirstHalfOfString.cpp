#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cout << "Enter a string of even length: ";
    getline(cin, str);

    int len = str.length();
    if(len%2==0){
        reverse(str.begin(), str.begin() + len/2);
        cout << "Modified string is: " << str << endl;
    }
    else
        cout << "Entered string is of odd length\nTry again";
}