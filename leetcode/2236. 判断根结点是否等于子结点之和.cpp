class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(root==nullptr||root->left==nullptr||root->right==nullptr) return true;
        if(root->val != root->left->val + root->right->val) return false;
        else return checkTree(root->left) & checkTree(root->right);
    }
};
