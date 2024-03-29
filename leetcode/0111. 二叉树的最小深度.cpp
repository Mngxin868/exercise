class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        if(root->left==nullptr&&root->right==nullptr)
            return 1;
        else if(root->left==nullptr)
            return 1 + minDepth(root->right);
        else if(root->right==nullptr)
            return 1 + minDepth(root->left);
        else
            return 1 + min(minDepth(root->right), minDepth(root->left));
    }
};
