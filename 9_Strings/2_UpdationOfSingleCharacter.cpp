#include<iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter your string: ";
    getline(cin, str);

    cout << "Original String: ";
    cout << str;

    int index;
    cout << "\nEnter index where you want to change: ";
    cin >> index;

    char change;
    cout << "Enter change: ";
    cin >> change;

    str[index] = change;

    cout << "New string is: ";
    cout << str;
}