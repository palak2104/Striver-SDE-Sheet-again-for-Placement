class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        if(root==p) return root;
        if(root==q) return root;
        TreeNode* a=lowestCommonAncestor(root->left,p,q);
        TreeNode* b=lowestCommonAncestor(root->right,p,q);
        if(a&&b) return root;
        if(a) return a;
        if(b) return b;
        return NULL;
    }
}; 
