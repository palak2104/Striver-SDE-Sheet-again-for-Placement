class Solution {
    void func(TreeNode* root, int &k,int &ans){
    if(!root) return;
    func(root->left,k,ans);
    k--;
    if(k==0){
    ans=root->val;
    return;
    }
    func(root->right,k,ans);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        func(root,k,ans);
        return ans;
    }
};
