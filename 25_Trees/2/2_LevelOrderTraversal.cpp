#include<iostream>
#include<queue>
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

int levels(TreeNode* root){
    if(!root)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void nthLevel(TreeNode* root, int level, int curr){
    if(!root)
        return;
    if(curr==level){
        cout << root->val << " ";
        return;
    }
    nthLevel(root->left, level, curr + 1);
    nthLevel(root->right, level, curr + 1);
}

void levelOrder(TreeNode* root){
    int n = levels(root);
    for (int i = 1; i <= n; i++){
        nthLevel(root, i, 1);
        cout << endl;
    }
    return;
}

void levelOrderQueue(TreeNode* root){       // BFS traversal
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
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(7);
    TreeNode *c = new TreeNode(9);
    TreeNode *d = new TreeNode(2);
    TreeNode *e = new TreeNode(6);
    TreeNode *f = new TreeNode(9);
    TreeNode *g = new TreeNode(5);
    TreeNode *h = new TreeNode(11);
    TreeNode *i = new TreeNode(5);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    e->left = g;
    e->right = h;
    f->left = i;

    levelOrder(a);
    cout << endl;
    levelOrderQueue(a);

    return 0;
}