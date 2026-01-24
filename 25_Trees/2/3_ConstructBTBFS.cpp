#include<iostream>
#include<vector>
#include<queue>
#include<climits>
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

void levelOrder(TreeNode* root){
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty()){
        TreeNode *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9, INT_MIN};
    TreeNode *root = construct(arr);
    levelOrder(root);

    return 0;
}