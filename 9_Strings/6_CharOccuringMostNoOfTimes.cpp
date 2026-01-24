#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    string str;
    cout << "Enter your string: ";
    cin >> str;

    vector<int> arr(26, 0);
    for (int i = 0; i < str.length();i++){
        int ascii = (int)str[i];
        arr[ascii - 97]++;
    }

    int max = 0;
    for (int i = 0; i < 26;i++){
        if(arr[i]>max)
            max = arr[i];
    }

    cout << "Character Frequencies:" << endl;
    for (int i = 0; i < 26;i++){
        if(arr[i]>0){
            char ch = char(i + 97);
            cout << ch << " -> " << arr[i] << endl;
        }
    }
    cout << "Maximum Frequency: " << max;
}