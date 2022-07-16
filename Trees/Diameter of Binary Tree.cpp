class Solution {
    int func(TreeNode* root,int &dia){
        if(root==NULL) return 0;
        int left=func(root->left,dia);
        int right=func(root->right,dia);
        dia=max(dia,left+right);
        return max(left,right)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=INT_MIN;
        func(root,dia);
        return dia;
    }
};
