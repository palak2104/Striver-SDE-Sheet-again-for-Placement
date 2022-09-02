void func(TreeNode<int> *node,int x,int &ans){
    if(!node) return;
    if(node->val==x){
        ans=node->val;
        return;
    }
    if(node->val>x){
        func(node->left,x,ans);
        return;
    }
    else{
       ans=node->val;
       func(node->right,x,ans);
       return; 
    }
}
int floorInBST(TreeNode<int> * node, int x)
{
    // Write your code here.
    int ans=-1;
    func(node,x,ans);
    return ans;
}
