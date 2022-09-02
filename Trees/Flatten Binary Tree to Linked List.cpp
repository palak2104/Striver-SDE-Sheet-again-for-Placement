class Solution {
    TreeNode* func(TreeNode* root){
    if(!root->left && !root->right) return root;
    TreeNode* temp=root->right;
    TreeNode* ln=NULL,*rn=NULL;
    if(root->left!=NULL){
        root->right=root->left;
        root->left=NULL;
        ln=func(root->right);
    }
    if(temp) rn=func(temp);
    if(ln) ln->right=temp;
    if(rn) return rn;
    if(ln) return ln;
    return root;
    }
public:
    void flatten(TreeNode* root) {
    if(!root) return;
    func(root);
    }
};
