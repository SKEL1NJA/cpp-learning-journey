#include<iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter a string of even length: ";
    getline(cin, str);

    int len = str.length();

    if(len%2==0){
        // substr(idx,len)
        string secondHalf = str.substr(len / 2);
        cout<<"Second half of the string is: "<<secondHalf<<endl;
    }
    else
        cout << "Entered string is of odd length\nTry again";

    return 0;
}