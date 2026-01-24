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

void leftBoundary(TreeNode* root){
    if(!root)
        return;
    if(!root->left && !root->right)
        return;
    cout << root->val << " ";
    leftBoundary(root->left);
    if(root->left==NULL)
        leftBoundary(root->right);
}

void leafNodes(TreeNode* root){
    if(!root)
        return;
    if(!root->left && !root->right)
        cout << root->val << " ";
    leafNodes(root->left);
    leafNodes(root->right);
}

void rightBoundary(TreeNode* root){
    if(!root)
        return;
    if(!root->left && !root->right)
        return;
    rightBoundary(root->right);
    if(root->right==NULL)
        rightBoundary(root->left);
    cout << root->val << " ";
}

void boundaryTraversal(TreeNode* root){
    leftBoundary(root);
    leafNodes(root);
    rightBoundary(root->right);
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, INT_MIN, 6, 7, INT_MIN, 8, INT_MIN, 9, 10, INT_MIN, 11, INT_MIN, 12, INT_MIN, 13, INT_MIN, 14, 15, 16, INT_MIN, 17, INT_MIN, INT_MIN, 18, INT_MIN, 19, INT_MIN, INT_MIN, INT_MIN, 20, 21, 22, 23, INT_MIN, 24, 25, 26, 27, INT_MIN, INT_MIN, 28, INT_MIN, INT_MIN};
    TreeNode *root = construct(arr);
    // levelOrder(root);

    boundaryTraversal(root); // 1 2 4 7 11 15 19 24 16 25 26 27 13 28 23 18 14 10 6 3

    return 0;
}