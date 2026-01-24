#include<iostream>
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

int product(TreeNode* root){
    if(!root)
        return 1;
    return root->val * product(root->left) * product(root->right);
}

int minValue(TreeNode* root){
    if(!root)
        return INT_MAX;
    int LST = minValue(root->left);
    int RST = minValue(root->right);
    return min(root->val, min(LST, RST));
}

int main(){
    TreeNode *a = new TreeNode(1); // root
    TreeNode *b = new TreeNode(4);
    TreeNode *c = new TreeNode(7);
    TreeNode *d = new TreeNode(-2);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(-8);
    TreeNode *g = new TreeNode(9);
    TreeNode *h = new TreeNode(10);
    TreeNode *i = new TreeNode(11);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    d->right = g;
    g->left = h;
    g->right = i;

    cout << product(a) << endl;  // 2217600
    cout << minValue(a) << endl; // -8

    return 0;
}