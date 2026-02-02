#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool present(vector<int>& arr){
    for(int ele : arr){
        if(ele < 0)
            return true;
    }
    return false;
}

bool zeroPresent(vector<int>& arr){
    for(int ele : arr){
        if(ele == 0)
            return true;
    }
    return false;
}

bool evenOrOdd(vector<int>& arr){
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++){
        if(arr[i] < 0)
            cnt++;
    }
    return (cnt % 2 == 0);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        if(present(arr)){
            int pro = 1;
            int maxNeg = INT_MIN;

            for(int ele : arr){
                if(ele != 0)
                    pro *= ele;
                if(ele < 0)
                    maxNeg = max(maxNeg, ele);
            }

            // even number of negatives → remove largest negative
            if(evenOrOdd(arr)){
                pro /= maxNeg;
            }

            cout << pro << endl;
        }
        else{
            if(zeroPresent(arr))
                cout << 0 << endl;
            else{
                int mini = INT_MAX;
                for (int i = 0; i < n; i++){
                    if(arr[i] < mini)
                        mini = arr[i];
                }
                cout << mini << endl;
            }
        }
    }
    return 0;
}