#include<iostream>
#include<stack>
using namespace std;

int solve(int val1, int val2, char op){
    if(op=='*')
        return val1 * val2;
    else if(op=='/')
        return val1 / val2;
    else if(op=='+')
        return val1 + val2;
    return val1 - val2;
}

int main(){
    string s = "79+4*8/3-";
    stack<int> val;

    for(char ch : s){
        if((int)ch>=48 && (int)ch<=57)
            val.push(ch - '0');
        else{
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            char op = ch;
            int ans = solve(val1, val2, op);
            val.push(ans);
        }
    }

    cout << val.top() << endl;

    return 0;
}