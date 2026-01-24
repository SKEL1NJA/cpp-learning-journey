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

void displayTree(TreeNode* root){
    if(!root)
        return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}

int sum(TreeNode* root){
    if(!root)
        return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int size(TreeNode* root){
    if(!root)
        return 0;
    return 1 + size(root->left) + size(root->right); 
}

int maxInTree(TreeNode* root){
    if(!root)
        return INT_MIN;
    int lMax = maxInTree(root->left);
    int rMax = maxInTree(root->right);
    return max(root->val, max(lMax, rMax));
}

int levels(TreeNode* root){
    if(!root)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

int main(){
    TreeNode *a = new TreeNode(1); // root
    TreeNode *b = new TreeNode(4);
    TreeNode *c = new TreeNode(7);
    TreeNode *d = new TreeNode(2);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(8);
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

    displayTree(a);
    cout << endl;

    cout << "Sum of all nodes: " << sum(a) << endl;

    cout << "Edges: " << size(a) - 1 << endl;

    cout << "Maximum value in tree: " << maxInTree(a) << endl;

    cout << "Height: " << levels(a) - 1 << endl;

    return 0;
}