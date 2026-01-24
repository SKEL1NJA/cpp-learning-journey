#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void display(vector<int>& nums){
    for (int i = 0; i < nums.size();i++)
        cout << nums[i] << " ";
    cout << endl;
}

vector<int> firstNegative(vector<int>& arr, int k){
    int n = arr.size();
    vector<int> neg;
    bool flag = false;
    for (int i = 0; i < k;i++){
        if(arr[i]<0){
            flag = true;
            neg.push_back(arr[i]);
            break;
        }
    }
    if(flag==false)
        neg.push_back(0);
    int i = 1, j = k;
    while(j<n){
        flag = false; // no negative exists
        for (int l = i; l <= j;l++){
            if(arr[l]<0){
                flag = true; // negative ele. found
                neg.push_back(arr[l]);
                break;
            }
        }
        if(flag==false)
            neg.push_back(0);
        i++, j++;
    }
    return neg;
}

vector<int> firstNegative1(vector<int> arr, int k){
    int n = arr.size();
    queue<int> idx;
    for (int i = 0; i < n;i++){
        if(arr[i]<0)
            idx.push(i);
    }
    vector<int> neg;
    bool flag = false;

    // first window
    if(!idx.empty() && idx.front()<k){
        flag = true;
        neg.push_back(arr[idx.front()]);
    }
    if(flag==false)
        neg.push_back(0);

    int i = 1, j = k;
    while(j<n){
        flag = false;
        while(!idx.empty() && idx.front()<i)
            idx.pop();
        if(!idx.empty() && idx.front()<=j){
            flag = true;
            neg.push_back(arr[idx.front()]);
        }
        if(flag==false)
            neg.push_back(0);
        i++, j++;
    }
    return neg;
}

int main(){
    vector<int> arr = {0, -1, -2, 3, 4, -5, 6, 4, 7, -8};
    // Sliding window approach [O(n*k)]
    vector<int> neg = firstNegative(arr, 3);
    display(neg);

    // Queue approach [O(n)]
    vector<int> neg1 = firstNegative1(arr, 3);
    display(neg1);

    return 0;
}