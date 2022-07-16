class Solution {
    int func(TreeNode* root){
        if(!root) return 0;
        int a=func(root->left);
        int b=func(root->right);
        if(a==-1 || b==-1) return -1;
        if(abs(a-b)>=2) return -1;
        return 1+max(a,b);
    }
public:
    bool isBalanced(TreeNode* root) {
       if(!root) return true;
       if(func(root)==-1) return false;
       return true;
    }
};
