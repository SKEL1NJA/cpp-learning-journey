#include<iostream>
#include<vector>
using namespace std;

int maxEle(vector<int>& v, int i, int max){
    if(i==v.size())
        return max;
    if(v[i]>max)
        max = v[i];
    return maxEle(v, i + 1, max);
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n;i++){
        int x;
        cout<<"Enter element "<<i+1<<": ";
        cin >> x;
        v.push_back(x);
    }

    cout << "Maximim Element: " << maxEle(v, 1,v[0]);
}