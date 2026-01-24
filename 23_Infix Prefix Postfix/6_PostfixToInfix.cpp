#include<iostream>
#include<stack>
using namespace std;

string solve(string val1, string val2, char op){
    string ans = "";
    ans += val1;
    ans.push_back(op);
    ans += val2;
    return ans;
}

int main(){
    string s = "79+4*8/3-";
    stack<string> val;

    for(char ch : s){
        if((int)ch>=48 && (int)ch<=57)
            val.push(to_string(ch - '0'));
        else{
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            char op = ch;
            string ans = solve(val1, val2, op);
            val.push(ans);
        }
    }

    cout << val.top() << endl;

    return 0;
}