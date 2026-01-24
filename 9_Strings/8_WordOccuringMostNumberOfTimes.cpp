#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<string>& arr){
    for (int i = 0; i < arr.size();i++)
        cout << arr[i] << endl;
}

void wordCount(vector<string>& arr){
    sort(arr.begin(), arr.end());
    int maxCount = 1, count = 1;
    string maxWord = arr[0];
    for (int i = 1; i < arr.size();i++){
        if(arr[i]==arr[i-1])
            count++;
        else
            count = 1;

        if(count>maxCount){
            maxCount = count;
            maxWord = arr[i];
        }
    }
    cout << maxWord << " -> " << maxCount << " times";
}

int main(){
    string str;
    cout<<"Enter your sentence: ";
    getline(cin, str);

    stringstream ss(str);
    string temp;
    vector<string> arr;
    while(ss>>temp)
        arr.push_back(temp);

    wordCount(arr);
}