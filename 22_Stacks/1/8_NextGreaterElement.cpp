#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};

    int n = sizeof(arr) / sizeof(arr[0]); // 8
    int ans[n];
    ans[n - 1] = -1;

    // brute force approach  TC: O(n^2),   SC: O(1)
    // for (int i = 0; i < n-1;i++){
    //     ans[i] = -1;
    //     for (int j = i + 1; j < n;j++){
    //         if(arr[j]>arr[i]){
    //             ans[i] = arr[j];
    //             break;
    //         }
    //     }
    // }


    // Optimized Stack approach  TC: O(n), SC: O(n) --- POP ANS PUSH
    stack<int> st;
    st.push(arr[n - 1]);
    for (int i = n - 2; i >= 0;i--){
        // pop all the elements smaller than arr[i]th element
        while(st.size()>0 && st.top()<=arr[i])
            st.pop();
        // Marking the answer
        if(st.size()==0)
            ans[i] = -1;
        else
            ans[i] = st.top();
        // pushing the element in stack
        st.push(arr[i]);
    }

    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
