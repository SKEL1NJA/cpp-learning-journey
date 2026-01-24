#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode* construct(vector<int>& arr){
    int n = arr.size();
    queue<TreeNode *> q;
    TreeNode *root = new TreeNode(arr[0]);
    q.push(root);
    int i = 1, j = 2;
    while(!q.empty() && i<n){
        TreeNode *temp = q.front();
        q.pop();
        TreeNode *l, *r;

        if(arr[i]!=INT_MIN)
            l = new TreeNode(arr[i]);
        else
            l = NULL;
        if(j!=n && arr[j]!=INT_MIN)
            r = new TreeNode(arr[j]);
        else
            r = NULL;

        temp->left = l, temp->right = r;
        if(l!=NULL)
            q.push(l);
        if(r!=NULL)
            q.push(r);

        i += 2, j += 2;
    }
    return root;
}

vector<int> leftSideView(TreeNode* root){
    vector<int> ans;
    queue<TreeNode *> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        int left;
        for (int i = 0; i < n;i++){
            TreeNode *temp = q.front();
            q.pop();
            left = temp->val;
            if(temp->right)
                q.push(temp->right);
            if(temp->left)
                q.push(temp->left);
        }
        ans.push_back(left);
    }

    return ans;
}

int main(){
    vector<int> arr = {1,2,3,INT_MIN,5,INT_MIN,4,INT_MIN,INT_MIN,INT_MIN,6};
    TreeNode *root = construct(arr);
    vector<int> ans = leftSideView(root);
    for(int num:ans){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}