#include<iostream>
using namespace std;

int binaryToDecimal(string& binary){
    int n = binary.size();
    int ans = 0;
    for (int i = n-1; i >= 0;i--){
        char ch = binary[i];
        int num = ch - '0';
        ans += num * (1 << (n - i - 1));
    }
    return ans;
}

int main(){
    string str = "1000011";
    cout << binaryToDecimal(str); // 67
    return 0;
}