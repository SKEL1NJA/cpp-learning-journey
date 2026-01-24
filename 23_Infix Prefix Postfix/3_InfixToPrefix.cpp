#include<iostream>
#include<stack>
using namespace std;

int pri(char ch){
    if(ch=='*' || ch=='/')
        return 2;
    else if(ch=='+' || ch=='-')
        return 1;
    return 0;
}

string solve(string val1, string val2, char optr){
    string ans = "";
    ans.push_back(optr);
    ans += val1;
    ans += val2;
    return ans;
}

int main(){
    string str = "(2+6)*4/8-3";
    stack<string> val;
    stack<char> op;
    for(char ch : str){
        if((int)ch>=48 && (int)ch<=57)
            val.push(to_string(ch-48));
        else if(ch == '(')
            op.push(ch);
        else if(ch == ')'){
            while(!op.empty() && op.top() != '('){
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                char optr = op.top();
                op.pop();
                val.push(solve(val1, val2, optr));
            }
            op.pop(); // remove '('
        }
        else { // operator
            while(!op.empty() && pri(ch) <= pri(op.top())){
                if(op.top() == '(') break;
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                char optr = op.top();
                op.pop();
                val.push(solve(val1, val2, optr));
            }
            op.push(ch);
        }
    }
    while(!op.empty()){
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        char optr = op.top();
        op.pop();
        string ans = solve(val1, val2, optr);
        val.push(ans);
    }

    cout << val.top();

    return 0;
}