#include<iostream>
#include<stack>
using namespace std;

int pri(char ch){
    if(ch=='*' || ch=='/')
        return 2;
    return 1;
}

int solve(int num1, int num2, char optr){
    if(optr=='*')
        return num1 * num2;
    else if(optr=='/')
        return num1 / num2;
    else if(optr=='+')
        return num1 + num2;
    else
        return num1 - num2;
}

int main(){
    string str = "2+6*4/8-3";
    stack<int> val;
    stack<char> op;
    for(char ch : str){
        if((int)ch>=48 && (int)ch<=57){
            val.push(ch-'0');
        }
        else if(op.empty())
            op.push(ch);
        else if(pri(ch)>pri(op.top()))
            op.push(ch);
        else{
            while(!op.empty() && pri(ch)<=pri(op.top())){
                int num2 = val.top();
                val.pop();
                int num1 = val.top();
                val.pop();
                char optr = op.top();
                op.pop();
                int ans = solve(num1, num2, optr);
                val.push(ans);
            }
            op.push(ch);
        }
    }
    // The operator stack can still have values
    // empty it
    while(!op.empty()){
        int num2 = val.top();
        val.pop();
        int num1 = val.top();
        val.pop();
        char optr = op.top();
        op.pop();
        int ans = solve(num1, num2, optr);
        val.push(ans);
    }

    cout << val.top();

    return 0;
}