/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//递归版本
class Solution {
public:
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root!=nullptr){
            if(root->left!=nullptr) inorderTraversal(root->left);
            ans.push_back(root->val);
            if(root->right!=nullptr) inorderTraversal(root->right);
        }
        return ans;
    }
};

//非递归版本
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<TreeNode*> list;
        vector<int> ans;
        while(root!=nullptr||!list.empty()){
            if(root!=nullptr){
                list.push_back(root);
                root = root->left;
            }
            else{
                root = list[list.size()-1];
                list.pop_back();
                ans.push_back(root->val);
                root = root->right;
            }
        }
        return ans;
    }
};
