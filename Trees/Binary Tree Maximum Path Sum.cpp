class Solution {
    int sum=INT_MIN;
    int func(TreeNode* root){
        if(!root) return 0;
        int a=func(root->left);
        int b=func(root->right);
        sum=max(sum,root->val+a+b);
        int x=root->val+max(a,b);
        if(x<0) return 0;
        return x;
    }
public:
    int maxPathSum(TreeNode* root) {
       func(root); 
       return sum; 
    }
};
