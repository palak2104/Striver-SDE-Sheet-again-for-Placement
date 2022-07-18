class Solution {
    bool func(TreeNode* left, TreeNode* right){
        if(!left || !right) return left==right;
        if(left->val!=right->val) return false;
        return func(left->left, right->right) && func(left->right, right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return func(root->left,root->right);
    }
};
