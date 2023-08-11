class Solution {
public:
    bool func(TreeNode* l, TreeNode* r){
        if(l==nullptr&&r==nullptr) return true;
        if(l!=nullptr&&r!=nullptr&&l->val==r->val)
            return func(l->left, r->right) && func(l->right, r->left);
        return false;
    }

    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return func(root->left, root->right);
    }
};
