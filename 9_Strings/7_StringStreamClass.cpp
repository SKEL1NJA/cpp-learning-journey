#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str;
    cout << "Enter your sentence: ";
    getline(cin, str);

    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout << temp << endl;
    }
}