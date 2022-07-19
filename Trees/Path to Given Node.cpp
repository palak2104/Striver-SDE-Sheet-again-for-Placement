bool func(TreeNode* root, int target,vector<int>&res){
    if(!root) return false;
    res.push_back(root->val);
    if(root->val==target) return true;
    if(func(root->left,target,res)) return true;
    if(func(root->right,target,res)) return true;
    res.pop_back();
    return false;
}
vector<int> Solution::solve(TreeNode* root, int target) {
    vector<int>res;
    func(root,target,res);
    return res;
}
