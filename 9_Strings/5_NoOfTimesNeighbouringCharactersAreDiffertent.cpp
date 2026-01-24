#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter your string: ";
    cin >> str;

    int count = 0;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if(len==1)
            break;
        if(i==0 && str[i]!=str[i+1])
            count++;
        else if(str[i]!=str[i-1] && str[i]!=str[i+1])
            count++;
        else if(i==len-1 && str[i]!=str[i-1])
            count++;
    }

    cout << count;
}

// I/P: abbcdeffghh